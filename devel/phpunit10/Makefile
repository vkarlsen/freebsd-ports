PORTNAME=	phpunit
PORTVERSION=	10.0.0
CATEGORIES=	devel www
MASTER_SITES=	https://phar.phpunit.de/
PKGNAMESUFFIX=	10${PHP_PKGNAMESUFFIX}
EXTRACT_SUFX=	.phar

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Testing framework for unit tests
WWW=		https://phpunit.de/ \
		https://github.com/sebastianbergmann/phpunit

LICENSE=	BSD3CLAUSE

USES=		cpe php:flavors
USE_PHP=	dom json pcre phar spl

IGNORE_WITH_PHP=80
NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/phpunit

CONFLICTS_INSTALL=	phpunit[0-9]

CPE_VENDOR=	phpunit_project

do-extract:
	@${CP} ${DISTDIR}/${DISTFILES} ${WRKDIR}/phpunit

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/phpunit ${STAGEDIR}${PREFIX}/bin/phpunit

.include <bsd.port.mk>
