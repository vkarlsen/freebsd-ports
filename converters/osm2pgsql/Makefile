PORTNAME=	osm2pgsql
PORTVERSION=	1.8.1
CATEGORIES=	converters geography

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Convert OSM XML data to PostgreSQL database
WWW=		https://osm2pgsql.org/ \
		https://wiki.openstreetmap.org/wiki/Osm2pgsql \
		https://github.com/openstreetmap/osm2pgsql

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libproj.so:graphics/proj \
		libboost_system.so:devel/boost-libs \
		libexpat.so:textproc/expat2
BUILD_DEPENDS=	${LOCALBASE}/include/osmium/version.hpp:astro/libosmium \
		${LOCALBASE}/include/protozero/version.hpp:devel/protozero

USE_GITHUB=	yes
GH_ACCOUNT=	openstreetmap

USES=		cmake compiler:c++17-lang pgsql python:run shebangfix
SHEBANG_FILES=	scripts/osm2pgsql-replication
CMAKE_ON=	CMAKE_DISABLE_FIND_PACKAGE_Git \
		EXTERNAL_LIBOSMIUM \
		EXTERNAL_PROTOZERO
#		EXTERNAL_FMT  # XXX: does not build with libfmt 9.x from ports, so use bundled version until upstream fixes
CMAKE_ARGS=	-DLUA_EXE="${LOCALBASE}/bin/${LUA_CMD}"

PORTDOCS=	AUTHORS CONTRIBUTING.md README.md
PORTDATA=	*

OPTIONS_DEFINE=	DOCS LUAJIT TEST

LUAJIT_DESC=		Build with LuaJIT support
LUAJIT_CMAKE_BOOL=	WITH_LUAJIT
LUAJIT_USES=		luajit lua:54:build  # lua is needed just for running tests
LUAJIT_USES_OFF=	lua:54
TEST_CMAKE_BOOL=	BUILD_TESTS
TEST_TEST_TARGET=	test
TEST_CMAKE_ON=		-DCMAKE_CTEST_ARGUMENTS="--label-regex;NoDB;--output-on-failure"
TEST_BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}behave>=0:devel/py-behave@${PY_FLAVOR}
TEST_TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}behave>=0:devel/py-behave@${PY_FLAVOR}

post-patch:
	@${REINPLACE_CMD} -e 's|find_package(Lua |&${LUA_VER} EXACT |' \
		${WRKSRC}/CMakeLists.txt

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${DOCSDIR}/
.endfor

.include <bsd.port.mk>
