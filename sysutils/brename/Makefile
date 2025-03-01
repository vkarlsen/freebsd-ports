PORTNAME=	brename
DISTVERSIONPREFIX=	v
DISTVERSION=	2.12.0
PORTREVISION=	3
CATEGORIES=	sysutils

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Tool for batch renaming files/directories via regular expressions
WWW=		https://github.com/shenwei356/brename

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go:modules
USE_GITHUB=	yes
GH_ACCOUNT=	shenwei356
GH_TUPLE=	\
		fatih:color:v1.13.0:fatih_color/vendor/github.com/fatih/color \
		golang:sys:fbc7d0a398ab:golang_sys/vendor/golang.org/x/sys \
		inconshreveable:mousetrap:v1.0.1:inconshreveable_mousetrap/vendor/github.com/inconshreveable/mousetrap \
		klauspost:compress:v1.15.1:klauspost_compress/vendor/github.com/klauspost/compress \
		klauspost:pgzip:v1.2.5:klauspost_pgzip/vendor/github.com/klauspost/pgzip \
		kr:pretty:v0.3.1:kr_pretty/vendor/github.com/kr/pretty \
		mattn:go-colorable:v0.1.13:mattn_go_colorable/vendor/github.com/mattn/go-colorable \
		mattn:go-isatty:v0.0.16:mattn_go_isatty/vendor/github.com/mattn/go-isatty \
		shenwei356:breader:v0.3.2:shenwei356_breader/vendor/github.com/shenwei356/breader \
		shenwei356:go-logging:c6b9702d88ba:shenwei356_go_logging/vendor/github.com/shenwei356/go-logging \
		shenwei356:natsort:580176ad49fb:shenwei356_natsort/vendor/github.com/shenwei356/natsort \
		shenwei356:util:v0.5.0:shenwei356_util/vendor/github.com/shenwei356/util \
		shenwei356:xopen:v0.2.2:shenwei356_xopen/vendor/github.com/shenwei356/xopen \
		spf13:cobra:v1.6.1:spf13_cobra/vendor/github.com/spf13/cobra \
		spf13:pflag:v1.0.5:spf13_pflag/vendor/github.com/spf13/pflag \
		twotwotwo:sorts:bf5c1f2b8553:twotwotwo_sorts/vendor/github.com/twotwotwo/sorts \
		ulikunitz:xz:v0.5.10:ulikunitz_xz/vendor/github.com/ulikunitz/xz

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
