PORTNAME=	asciidoctor-pdf
PORTVERSION=	2.3.4
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Convert AsciiDoc documents to PDF
WWW=		https://github.com/asciidoctor/asciidoctor-pdf

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-asciidoctor>=2.0<3:textproc/rubygem-asciidoctor \
		rubygem-concurrent-ruby>=1.1<2:devel/rubygem-concurrent-ruby \
		rubygem-matrix>=0.4<1:math/rubygem-matrix \
		rubygem-prawn>=2.4.0<2.5:print/rubygem-prawn \
		rubygem-prawn-icon>=3.1.0<3.2:print/rubygem-prawn-icon \
		rubygem-prawn-svg>=0.31.0<1:print/rubygem-prawn-svg \
		rubygem-prawn-table>=0.2.0<0.3:print/rubygem-prawn-table \
		rubygem-prawn-templates>=0.1.0<0.2:print/rubygem-prawn-templates \
		rubygem-treetop>=1.6.0<1.7:devel/rubygem-treetop

USES=		gem

NO_ARCH=	yes

PLIST_FILES=	bin/asciidoctor-pdf \
		bin/asciidoctor-pdf-optimize

.include <bsd.port.mk>
