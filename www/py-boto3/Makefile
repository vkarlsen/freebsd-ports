PORTNAME=	boto3
PORTVERSION=	1.26.60
CATEGORIES=	www python devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	AWS SDK for Python
WWW=		https://github.com/boto/boto3

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}botocore>=1.29.${PORTVERSION:E}<1.30.0:devel/py-botocore@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}jmespath>=0.7.1<2.0.0:devel/py-jmespath@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}s3transfer>=0.6.0<0.7.0:net/py-s3transfer@${PY_FLAVOR}

USES=		python:3.7+
USE_PYTHON=	autoplist concurrent distutils pytest

NO_ARCH=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	boto

.include <bsd.port.mk>
