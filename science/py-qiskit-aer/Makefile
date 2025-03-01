PORTNAME=	qiskit-aer
DISTVERSION=	0.10.4
CATEGORIES=	science python # quantum-computing
#MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

PATCH_SITES=	https://github.com/${GH_ACCOUNT}/${GH_PROJECT}/commit/
PATCHFILES=	46d86944f349a177acb40fb8a3adc301c395fe60.patch:-p1 # https://github.com/Qiskit/qiskit-aer/pull/1576

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Aer submodule of the Quiskit framework for quantum computing
WWW=		https://qiskit.org/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}scikit-build>0:devel/py-scikit-build@${PY_FLAVOR} \
		cmake:devel/cmake-core \
		nlohmann-json>0:devel/nlohmann-json \
		${PYTHON_PKGNAMEPREFIX}pip>0:devel/py-pip@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pybind11>0:devel/py-pybind11@${PY_FLAVOR} \
		${PYNUMPY}
LIB_DEPENDS=	libmuparserx.so:math/muparserx \
		libspdlog.so:devel/spdlog # binaries aren't linked with these for some reason
RUN_DEPENDS=	${PYNUMPY}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}fixtures>0:devel/py-fixtures@${PY_FLAVOR}

USES=		python:3.7+ localbase:ldflags
USE_PYTHON=	distutils pytest # all tests fail, see https://github.com/Qiskit/qiskit-aer/issues/1577

USE_GITHUB=	yes
GH_ACCOUNT=	Qiskit

CONFIGURE_ENV=	DISABLE_CONAN=ON DISABLE_DEPENDENCY_INSTALL=ON
MAKE_ENV=	DISABLE_CONAN=ON DISABLE_DEPENDENCY_INSTALL=ON
TEST_ENV=	${MAKE_ENV} PYTHONPATH=${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}

post-install:
	# strip binaries
.for f in pulse/controllers/pulse_utils pulse/controllers/test_python_to_cpp backends/controller_wrappers
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/qiskit/providers/aer/${f}.cpython-${PYTHON_SUFFIX}.so
.endfor
	# remove stray files, see https://github.com/Qiskit/qiskit-aer/issues/1574
	@cd ${STAGEDIR}${PREFIX} && ${RM} -r \
		CMakeLists.txt \
		MANIFEST.in \
		README.md \
		cmake \
		contrib \
		pyproject.toml \
		qiskit \
		src

.include <bsd.port.mk>
