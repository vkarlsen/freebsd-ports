PORTNAME=	clash
DISTVERSIONPREFIX=	v
DISTVERSION=	1.12.0
PORTREVISION=	2
CATEGORIES=	net

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Rule-based tunnel in Go
WWW=		https://github.com/Dreamacro/clash

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go:modules cpe

CPE_VENDOR=	clash_project

GO_MODULE=	github.com/Dreamacro/clash

PLIST_FILES=	bin/${PORTNAME}

PORTSCOUT=	limit:^[0-9\.]*$$

pre-patch:
	@cd ${WRKSRC} && ${CP} listener/redir/tcp_linux.go listener/redir/tcp_freebsd.go

.include <bsd.port.mk>
