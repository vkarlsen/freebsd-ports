PORTNAME=	vistir
PORTVERSION=	0.7.5
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Miscellaneous utilities for filesystems, paths, projects, subprocesses and more
WWW=		https://github.com/sarugaku/vistir

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}colorama>=0.3.4:devel/py-colorama@${PY_FLAVOR}

USES=		python:3.7+
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

OPTIONS_DEFINE=	REQUESTS SPINNER
REQUESTS_DESC=	Requests session support
SPINNER_DESC=	Terminal spinner support

REQUESTS_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=0:www/py-requests@${PY_FLAVOR}
SPINNER_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}yaspin>=0:devel/py-yaspin@${PY_FLAVOR}

.include <bsd.port.mk>
