PORTNAME=	bottom
DISTVERSION=	0.8.0
PORTREVISION=	1
CATEGORIES=	sysutils

MAINTAINER=	adamw@FreeBSD.org
COMMENT=	Graphical process and system monitor
WWW=		https://github.com/ClementTsang/bottom

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cargo
USE_GITHUB=	yes
GH_ACCOUNT=	ClementTsang
GH_TAGNAME=	d8da12f

PORTDOCS=	*
PLIST_FILES=	bin/btm \
		man/man1/btm.1.gz \
		share/bash-completion/completions/btm.bash \
		share/fish/vendor_completions.d/btm.fish \
		share/zsh/site-functions/_btm

OPTIONS_DEFINE=	DOCS

# Build manpages and shell completion
CARGO_ENV+=	BTM_GENERATE=true

GEN_DIR=	${WRKDIR}/bottom-*/target/tmp/bottom

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/btm
	${INSTALL_MAN} ${GEN_DIR}/manpage/btm.1 ${STAGEDIR}${MAN1PREFIX}/man/man1
	${INSTALL_DATA} ${GEN_DIR}/completion/btm.bash ${STAGEDIR}${PREFIX}/share/bash-completion/completions
	${INSTALL_DATA} ${GEN_DIR}/completion/btm.fish ${STAGEDIR}${PREFIX}/share/fish/vendor_completions.d
	${INSTALL_DATA} ${GEN_DIR}/completion/_btm     ${STAGEDIR}${PREFIX}/share/zsh/site-functions

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC}/docs/content && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
