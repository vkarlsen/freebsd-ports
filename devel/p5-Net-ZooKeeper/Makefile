PORTNAME=	Net-ZooKeeper
PORTVERSION=	0.41
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Perl extension for Apache ZooKeeper
WWW=		https://metacpan.org/release/Net-ZooKeeper

BROKEN=		No longer compiles with newer versions of ZooKeeper
DEPRECATED=	Broken since 2020
EXPIRATION_DATE=	2023-03-20

LICENSE=	APACHE20

LIB_DEPENDS=	libzookeeper_mt.so:devel/libzookeeper

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS+=	--zookeeper-include ${PREFIX}/include \
			--zookeeper-lib ${PREFIX}/libs

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Net/ZooKeeper/ZooKeeper.so

.include <bsd.port.mk>
