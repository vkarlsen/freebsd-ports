PORTNAME=	gnaural
PORTVERSION=	1.0.20110606
PORTREVISION=	8
CATEGORIES=	audio
MASTER_SITES=	SF/${PORTNAME}/Gnaural/ \
		LOCAL/martymac

MAINTAINER=	martymac@FreeBSD.org
COMMENT=	Binaural beat generator
WWW=		http://gnaural.sourceforge.net

LICENSE=	GPLv2 LGPL21
LICENSE_COMB=	multi

LIB_DEPENDS=	libportaudio.so:audio/portaudio \
		libsndfile.so:audio/libsndfile

GNU_CONFIGURE=	yes
USES=		desktop-file-utils gnome pkgconfig
USE_CSTD=	gnu89
USE_GNOME=	libglade2

LDFLAGS+=	-lm

.include <bsd.port.mk>
