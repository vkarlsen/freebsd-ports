PORTNAME=	pavucontrol-qt
PORTVERSION= 	1.2.0
CATEGORIES=	audio
MASTER_SITES=	LXQT/${PORTNAME}

MAINTAINER=	jsm@FreeBSD.org
COMMENT=	PulseAudio mixer in Qt
WWW=		https://github.com/lxqt/pavucontrol-qt/

LICENSE=	GPLv2

LIB_DEPENDS=	libpulse.so:audio/pulseaudio

USES=	cmake compiler:c++14-lang gettext-runtime localbase:ldflags qt:5 \
	lxqt pkgconfig tar:xz gnome
USE_QT=	buildtools:build qmake:build core dbus gui linguisttools \
	widgets
USE_LXQT=	buildtools
USE_GNOME=	glib20

.include <bsd.port.mk>
