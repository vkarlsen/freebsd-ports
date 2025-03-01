PORTNAME=	libbluray
DISTVERSION=	1.3.4
PORTEPOCH=	1
CATEGORIES=	multimedia
MASTER_SITES=	https://download.videolan.org/pub/videolan/${PORTNAME}/${DISTVERSION}/

MAINTAINER=	se@FreeBSD.org
COMMENT=	Blu-Ray discs playback library for media players
WWW=		https://www.videolan.org/developers/libbluray.html

LICENSE=	LGPL21

LIB_DEPENDS=	libfreetype.so:print/freetype2 \
		libfontconfig.so:x11-fonts/fontconfig

USES=		cpe gnome libtool pathfix pkgconfig tar:bzip2
USE_GNOME=	libxml2
USE_LDCONFIG=	yes

CPE_VENDOR=	videolan

GNU_CONFIGURE=	yes

CONFIGURE_ARGS=	--disable-doxygen-doc --disable-optimizations --disable-static
CONFIGURE_ENV=	PACKAGES="" # Bug #226009

INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	JAVA
OPTIONS_SUB=	yes

JAVA_DESC=	Enable Blu-Ray Java support

JAVA_CATEGORIES=		java
JAVA_BUILD_DEPENDS=		ant:devel/apache-ant
JAVA_CONFIGURE_ENABLE=		bdjava-jar
JAVA_CONFIGURE_WITH=		java9

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MJAVA}
USE_JAVA=	yes
JAVA_VERSION=	8
JAVA_BUILD=	yes
MAKE_ENV=	JAVA_HOME=${JAVA_HOME} \
		PATH=${JAVA_HOME}/bin:${PATH}
.endif

pre-build:
	@${REINPLACE_CMD} -e 's|/usr/share|${LOCALBASE}/share|' ${WRKSRC}/src/libbluray/bdj/bdj.c

.include <bsd.port.mk>
