PORTNAME=	taskjuggler
PORTVERSION=	3.7.1
CATEGORIES=	deskutils rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Project management tool for UNIX based operating systems
WWW=		https://taskjuggler.org/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	rubygem-mail>=2.7.1,2<3,2:mail/rubygem-mail \
		rubygem-term-ansicolor>=1.7.1<2:devel/rubygem-term-ansicolor

USES=		gem

NO_ARCH=	yes

PLIST_FILES=	bin/tj3 \
		bin/tj3client \
		bin/tj3d \
		bin/tj3man \
		bin/tj3ss_receiver \
		bin/tj3ss_sender \
		bin/tj3ts_receiver \
		bin/tj3ts_sender \
		bin/tj3ts_summary \
		bin/tj3webd

.include <bsd.port.mk>
