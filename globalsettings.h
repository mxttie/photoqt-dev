#ifndef GLOBALSETTINGS_H
#define GLOBALSETTINGS_H

#include <QObject>
#include <QFile>
#include <QDir>
#include <QtDebug>
#include <QColor>
#include <QStringList>

#if defined(Q_WS_X11)
#include <QX11Info>
#endif

class FileFormats {

private:
	bool readonly;

public:
	QStringList setDefaultFormats() {

		QStringList formats;

		// Microsoft Windows bitmap
		formats << ".bmp";

		// CompuServe Graphics Interchange Format
		formats << ".gif";

		// Tagged Image File Format
		formats << ".tif";
		formats << ".tiff";

		// JPEG-2000 Code Stream Syntax
		formats << ".jpeg2000";

		// Joint Photographic Experts Group JFIF format
		formats << ".jpeg";
		formats << ".jpg";

		// Portable Network Graphics
		formats << ".png";

		// Portable bitmap format (black and white)
		formats << ".pbm";

		// Portable graymap format (gray scale)
		formats << ".pgm";

		// Portable pixmap format (color)
		formats << ".ppm";

		// X Windows system bitmap, black and white only
		formats << ".xbm";

		// X Windows system pixmap
		formats << ".xpm";

#ifdef WITH_GRAPHICSMAGICK
		// PFS: 1st Publisher
		formats << ".art";

		//AVS X image
		formats << ".avs";

		// Continuous Acquisition and Life-cycle Support Type 1 image
		formats << ".cals";

		// Computer Graphics Metafile
		formats << ".cgm";

		// Raw cyan, magenta, yellow, and black samples
//		formats << ".cmyk";	*** not working yet

		// Microsoft Cursor Icon
		formats << ".cur";	// *** UNTESTED, should work

		// DR Halo
		formats << ".cut";

		// Digital Imaging and Communications in Medicine (DICOM) image
		formats << ".acr";
		formats << ".dcm";
		formats << ".dicom";
		formats << ".dic";

		// ZSoft IBM PC multi-page Paintbrush image
		formats << ".dcx";

		// Microsoft Windows Device Independent Bitmap
		formats << ".dib";

		// Digital Moving Picture Exchange
		formats << ".dpx";

		// Microsoft Enhanced Metafile (32-bit)
		formats << ".emf";

		// Encapsulated Portable Document Format
		formats << ".epdf";

		// Adobe Encapsulated PostScript Interchange format
		formats << ".epi";

		// Adobe Encapsulated PostScript
		formats << ".eps";

		// Adobe Level II Encapsulated PostScript
		formats << ".eps2";

		// Adobe Level III Encapsulated PostScript
		formats << ".eps3";

		// Adobe Encapsulated PostScript
		formats << ".epsf";

		// Adobe Encapsulated PostScript Interchange format
		formats << ".epsi";

		// Adobe Encapsulated PostScript Interchange format with TIFF preview
		formats << ".ept";

		// Group 3 FAX
		formats << ".fax";

		// FIG graphics format
		formats << ".fig";

		// Flexible Image Transport System
		formats << ".fits";

		// FlashPix Format
		formats << ".fpx";

		// Gnuplot plot files
		formats << ".gplt";

		// Raw gray samples
//		formats << ".gray";	*** not working yet

		// HP-GL plotter language
//		formats << ".hpgl";	*** requires hp2xx

		// Microsoft icon
		formats << ".ico";

		// Joint Bi-level Image experts Group file interchange format
		formats << ".jbig";

		// JPEG Network Graphics
		formats << ".jng";

		// JPEG-2000 JP2 File Format Syntax
		formats << ".jp2";

		// JPEG-2000 Code Stream Syntax
		formats << ".jpc";

		// MATLAB image format
		formats << ".mat";

		// Magick image file format
		formats << ".miff";

		// Bi-level bitmap in least-significant-byte first order
//		formats << ".mono";	*** not working yet

		// Multiple-image Network Graphics
		formats << ".mng";

		// Magick Persistent Cache image file format
		formats << ".mpc";

		// Magick Scripting Language
//		formats << ".msl";	*** conversion failed

		// MTV Raytracing image format
		formats << ".mtv";

		// Magick Vector Graphics
//		formats << ".mvg";	*** conversion failed

		// On-the-air Bitmap
		formats << ".otb";

		// Xv's Visual Schnauzer thumbnail format
		formats << ".p7";

		// Palm pixmap
		formats << ".palm";

		// Portable Arbitrary Map format
		formats << ".pam";

		// Photo CD
		formats << ".pcd";
		formats << ".pcds";

		// HP Page Control Language
//		formats << ".pcl";	*** external tool needed ("hp2xx")

		// ZSoft IBM PC Paintbrush file
		formats << ".pcx";

		// Palm Database ImageViewer Format
		formats << ".pdb";

		// Portable Document Format
		formats << ".pdf";

		// Postscript Type 1 font (ASCII)
//		formats << ".pfa";	*** conversion failed

		// Postscript Type 1 font (binary)
//		formats << ".pfb";	*** conversion failed

		// Personal Icon
		formats << ".picon";

		// Apple Macintosh QuickDraw /PICT file
		formats << ".pict";

		// Alias/Wavefront RLE image format
		formats << ".pix";

		// Portable anymap
		formats << ".pnm";

		// Adobe PostScript file
		formats << ".ps";

		// Adobe Level II PostScript file
		formats << ".ps2";

		// Adobe Level III PostScript file
		formats << ".ps3";

		// Adobe Photoshop bitmap file
		formats << ".psd";

		// Pyramid encoded TIFF
		formats << ".ptif";

		// Seattle File Works multi-image file
//		formats << ".pwp";	*** conversion failed

		// TopoL (GIS)
		formats << ".ras";

		// Radiance image file
		formats << ".rad";

		// Raw red, green, and blue samples
//		formats << ".rgb";	*** not working yet

		// Raw red, green, and blue and matte samples
//		formats << ".rgba";	*** not working yet

		// Alias/Wavefront image file
//		formats << ".rla";	*** conversion failed

		// Utah Run length encoded image file
//		formats << ".rle";	*** some tool missing

		// Scitex Continuous Tone Picture
//		formats << ".sct";	*** conversion failed

		// Seattle File Works image
//		formats << ".sfw";	*** conversion failed

		// Irix RGB image
		formats << ".sgi";

		// SUN Rasterfile
		formats << ".sun";

		// Scalable Vector Graphics
		formats << ".svg";

		// Truevision Targa image
		formats << ".tga";

		// PSX TIM file
//		formats << ".tim";	*** conversion failed

		// X-Motif UIL table
//		formats << ".uil";	*** conversion resulted in "Speicherzugriffsfehler"

		// Interleaved YUV raw image
//		formats << ".uyvy";	*** not working yet

		// VICAR rasterfile format
		formats << ".vicar";

		// Khoros Visualization Image File Format
		formats << ".viff";

		// Wireless bitmap
		formats << ".wbmp";

		// Windows Metafile
//		formats << ".wmf";	*** conversion failed

		// Word Perfect Graphics File
//		formats << ".wpg";	*** conversion failed

		// GIMP image
		formats << ".xcf";
		// X Windows system window dump
		formats << ".xwd";

		// CCIR 601 4:1:1
//		formats << ".yuv";	*** not working yet

#endif

		return formats;

	}

	QStringList getFormats() {

		QStringList formats = setDefaultFormats();

#ifdef WITH_GRAPHICSMAGICK

		QFile file(QDir::homePath() + "/.photoqt/fileformats");
		if(file.exists()) {


			if(!file.open(QIODevice::ReadOnly))
				qDebug() << "ERROR: Can't open image formats file";
			else {

				formats.clear();

				QTextStream in(&file);

				QString line = in.readLine();
				while (!line.isNull()) {
					formats << line.trimmed();
					line = in.readLine();
				}

			}


		}

#endif

		return formats;

	}

	void saveFormats(QString newFormats) {

		if(!readonly) {

			QString formats = newFormats.replace(",","\n").replace("*.",".");
			formats = formats.trimmed();

			QFile file(QDir::homePath() + "/.photoqt/fileformats");
			if(file.exists()) {
				if(!file.remove())
					qDebug() << "ERROR: Cannot replace image formats file";
			}
			if(!file.open(QIODevice::WriteOnly))
				qDebug() << "ERROR: Cannot write to image formats file";
			else {
				QTextStream out(&file);
				out << formats;
				file.close();

			}

		}


	}

	void setReadonly(bool ro) {
		readonly = ro;
	}


};

// All the global settings
class GlobalSettings : public QObject {

	Q_OBJECT

public:
	bool verbose;

	// The current version
	QString version;

	// The language selected and available languages
	QString language;
	QStringList availableLang;

	// Is composite enabled?
	bool composite;

	// Set the background color
	int bgColorRed;
	int bgColorGreen;
	int bgColorBlue;
	int bgColorAlpha;

	// Background image in use?
	bool backgroundImageScreenshot;
	bool backgroundImageUse;
	QString backgroundImagePath;
	bool backgroundImageScale;
	bool backgroundImageStretch;
	bool backgroundImageCenter;

	// Hide to tray icon?
	bool trayicon;
	// Smooth Transition for changing images
	int transition;
	// Loop through folder?
	bool loopthroughfolder;
	// Menu sensitivity
	int menusensitivity;
	// Close on click on background exits?
	bool closeongrey;
	// Border around big image
	int borderAroundImg;

	// Are quickinfos hidden?
	bool hidecounter;
	bool hidefilepathshowfilename;
	bool hidefilename;
	bool hidex;

	// Some settings of the slideshow
	int slideShowTime;
	int slideShowTransition;
	QString slideShowMusicFile;
	bool slideShowHideQuickinfo;

	QString wallpaperAlignment;
	QString wallpaperScale;

	// The Size of the thumbnail squares
	int thumbnailsize;
	// Thumbnails at the bottom or top?
	QString thumbnailposition;
	// Enable thumbnail cache
	bool thumbnailcache;
	// Are files used for caching (use database if false)
	bool thbcachefile;
	// Border between thumbnails
	int thumbnailSpacingBetween;
	// Lift hovered/selected thumbnails by x pixels
	int thumbnailLiftUp;
	// Are the thumbnails fading out or always visible?
	bool thumbnailKeepVisible;
	// Enable dynamic thumbnail creation
	bool thumbnailDynamic;
	// Don't load actual thumbnail but just display the filename
	bool thumbnailFilenameInstead;
	int thumbnailFilenameInsteadFontSize;
	// Thumbnails can be disabled altogether
	bool thumbnailDisable;

	// The currently known filetypes
	FileFormats *fileFormats;
	QString knownFileTypes;

	// Some exif settings
	bool exifenablemousetriggering;
	QString exifrotation;
	QString exifgpsmapservice;
	int exiffontsize;

	// Which Exif data is shown?
	bool exiffilename;
	bool exiffiletype;
	bool exiffilesize;
	bool exifdimensions;
	bool exifmake;
	bool exifmodel;
	bool exifsoftware;
	bool exifphototaken;
	bool exifexposuretime;
	bool exifflash;
	bool exifiso;
	bool exifscenetype;
	bool exifflength;
	bool exiffnumber;
	bool exiflightsource;
	bool exifgps;


	// Create a map that is given to all subwidgets
	QMap<QString,QVariant> toSignalOut() {

		QMap<QString,QVariant> map;

		map.insert("Version",version);
		map.insert("Language",language);

		map.insert("KnownFileTypes",knownFileTypes);

		map.insert("Composite",composite);
		map.insert("BgColorRed",bgColorRed);
		map.insert("BgColorGreen",bgColorGreen);
		map.insert("BgColorBlue",bgColorBlue);
		map.insert("BgColorAlpha",bgColorAlpha);

		map.insert("BackgroundImageScreenshot",backgroundImageScreenshot);
		map.insert("BackgroundImageUse",backgroundImageUse);
		map.insert("BackgroundImagePath",backgroundImagePath);
		map.insert("BackgroundImageScale",backgroundImageScale);
		map.insert("BackgroundImageStretch",backgroundImageStretch);
		map.insert("BackgroundImageCenter",backgroundImageCenter);

		map.insert("TrayIcon",trayicon);
		map.insert("Transition",transition);
		map.insert("LoopThroughFolder",loopthroughfolder);
		map.insert("MenuSensitivity",menusensitivity);
		map.insert("CloseOnGrey",closeongrey);
		map.insert("BorderAroundImg",borderAroundImg);

		map.insert("HideCounter",hidecounter);
		map.insert("HideFilepathShowFilename",hidefilepathshowfilename);
		map.insert("HideFilename",hidefilename);
		map.insert("HideX",hidex);

		map.insert("ThumbnailSize",thumbnailsize);
		map.insert("ThumbnailPosition",thumbnailposition);
		map.insert("ThumbnailCache",thumbnailcache);
		map.insert("ThbCacheFile",thbcachefile);
		map.insert("ThumbnailSpacingBetween",thumbnailSpacingBetween);
		map.insert("ThumbnailLiftUp",thumbnailLiftUp);
		map.insert("ThumbnailKeepVisible",thumbnailKeepVisible);
		map.insert("ThumbnailDynamic",thumbnailDynamic);
		map.insert("ThumbnailFilenameInstead",thumbnailFilenameInstead);
		map.insert("ThumbnailFilenameInsteadFontSize",thumbnailFilenameInsteadFontSize);
		map.insert("ThumbnailDisable",thumbnailDisable);

		map.insert("SlideShowTime",slideShowTime);
		map.insert("SlideShowTransition",slideShowTransition);
		map.insert("SlideShowMusicFile",slideShowMusicFile);
		map.insert("SlideShowHideQuickinfo",slideShowHideQuickinfo);

		map.insert("WallpaperAlignment",wallpaperAlignment);
		map.insert("WallpaperScale",wallpaperScale);

		map.insert("ExifEnableMouseTriggering",exifenablemousetriggering);
		map.insert("ExifFontSize",exiffontsize);
		map.insert("ExifFilename",exiffilename);
		map.insert("ExifFiletype",exiffiletype);
		map.insert("ExifFilesize",exiffilesize);
		map.insert("ExifDimensions",exifdimensions);
		map.insert("ExifMake",exifmake);
		map.insert("ExifModel",exifmodel);
		map.insert("ExifSoftware",exifsoftware);
		map.insert("ExifPhotoTaken",exifphototaken);
		map.insert("ExifExposureTime",exifexposuretime);
		map.insert("ExifFlash",exifflash);
		map.insert("ExifIso",exifiso);
		map.insert("ExifSceneType",exifscenetype);
		map.insert("ExifFLength",exifflength);
		map.insert("ExifFNumber",exiffnumber);
		map.insert("ExifLightSource",exiflightsource);
		map.insert("ExifGps",exifgps);
		map.insert("ExifRotation",exifrotation);
		map.insert("ExifGPSMapService",exifgpsmapservice);

		return map;

	}

	// Set the default settings
	void setDefault() {

		version = "beta";

		fileFormats = new FileFormats;
		knownFileTypes = "*" + fileFormats->getFormats().join(",*");

		language = "en";
		bgColorRed = 0;
		bgColorGreen = 0;
		bgColorBlue = 0;
		bgColorAlpha = 190;

		backgroundImageScreenshot = false;
		backgroundImageUse = false;
		backgroundImagePath = "";
		backgroundImageScale = false;
		backgroundImageStretch = false;
		backgroundImageCenter = false;

		composite = false;
		trayicon = false;
		transition = 0;
		loopthroughfolder = true;
		menusensitivity = 6;
		closeongrey = false;
		borderAroundImg = 5;

		hidecounter = false;
		hidefilepathshowfilename = true;
		hidefilename = false;
		hidex = false;

		thumbnailsize = 80;
		thumbnailposition = "Bottom";
		thumbnailcache = true;
		thbcachefile = false;
		thumbnailSpacingBetween = 0;
		thumbnailLiftUp = 10;
		thumbnailKeepVisible = false;
		thumbnailDynamic = false;
		thumbnailDisable = false;

		thumbnailFilenameInstead = false;
		thumbnailFilenameInsteadFontSize = 8;

		slideShowTime = 5;
		slideShowTransition = 4;
		slideShowMusicFile = "";
		slideShowHideQuickinfo = true;

		wallpaperAlignment = "center";
		wallpaperScale = "noscale";


		exifenablemousetriggering = true;
		exiffontsize = 8;
		exiffilename = true;
		exiffiletype = true;
		exiffilesize = true;
		exifdimensions = true;
		exifmake = true;
		exifmodel = true;
		exifsoftware = true;
		exifphototaken = true;
		exifexposuretime = true;
		exifflash = true;
		exifiso = true;
		exifscenetype = true;
		exifflength = true;
		exiffnumber = true;
		exiflightsource = true;
		exifgps = true;
		exifrotation = "Never";
		exifgpsmapservice = "bing.com/maps";
	}

	// Read the current settings
	void readSettings() {

		setDefault();

		QFile file(QDir::homePath() + "/.photoqt/settings");

		if(!file.open(QIODevice::ReadOnly))

			qDebug() << "ERROR reading settings";

		else {

			if(verbose) qDebug() << "Read Settings from File";

			// Read file
			QTextStream in(&file);
			QString all = in.readAll();

			if(all.contains("Language="))
				language = all.split("Language=").at(1).split("\n").at(0);

//			if(all.contains("KnownFileTypes=")) {
//				QString temp = all.split("KnownFileTypes=").at(1).split("\n").at(0);
//				if(temp.length() > 3)
//					knownFileTypes = temp;
//			}
			knownFileTypes = "*" + fileFormats->getFormats().join(",*");
			qDebug() << "KFT:" << knownFileTypes;

			if(all.contains("Composite=1"))
				composite = true;
			else if(all.contains("Composite=0"))
				composite = false;
			else {
#if defined(Q_WS_X11)

				if(QX11Info::isCompositingManagerRunning())
					composite = true;
				else
					composite = false;

#endif
			}

			if(all.contains("BgColorRed="))
				bgColorRed = all.split("BgColorRed=").at(1).split("\n").at(0).toInt();
			if(all.contains("BgColorGreen="))
				bgColorGreen = all.split("BgColorGreen=").at(1).split("\n").at(0).toInt();
			if(all.contains("BgColorBlue="))
				bgColorBlue = all.split("BgColorBlue=").at(1).split("\n").at(0).toInt();
			if(all.contains("BgColorAlpha="))
				bgColorAlpha = all.split("BgColorAlpha=").at(1).split("\n").at(0).toInt();

			if(all.contains("BackgroundImageScreenshot="))
				backgroundImageScreenshot = bool(all.split("BackgroundImageScreenshot=").at(1).split("\n").at(0).toInt());

			if(all.contains("BackgroundImagePath="))
				backgroundImagePath = all.split("BackgroundImagePath=").at(1).split("\n").at(0);
			if(all.contains("BackgroundImageUse="))
				backgroundImageUse = bool(all.split("BackgroundImageUse=").at(1).split("\n").at(0).toInt());
			if(all.contains("BackgroundImageScale="))
				backgroundImageScale = bool(all.split("BackgroundImageScale=").at(1).split("\n").at(0).toInt());
			if(all.contains("BackgroundImageStretch="))
				backgroundImageStretch = bool(all.split("BackgroundImageStretch=").at(1).split("\n").at(0).toInt());
			if(all.contains("BackgroundImageCenter="))
				backgroundImageCenter = bool(all.split("BackgroundImageCenter=").at(1).split("\n").at(0).toInt());


			if(all.contains("TrayIcon=1"))
				trayicon = true;
			else if(all.contains("TrayIcon=0"))
				trayicon = false;

			if(all.contains("Transition="))
				transition = all.split("Transition=").at(1).split("\n").at(0).toInt();

			if(all.contains("LoopThroughFolder=1"))
				loopthroughfolder = true;
			else if(all.contains("LoopThroughFolder=0"))
				loopthroughfolder = false;

			if(all.contains("MenuSensitivity="))
				menusensitivity = all.split("MenuSensitivity=").at(1).split("\n").at(0).toInt();

			if(all.contains("CloseOnGrey=1"))
				closeongrey = true;
			else if(all.contains("CloseOnGrey=0"))
				closeongrey = false;

			if(all.contains("BorderAroundImg="))
				borderAroundImg = all.split("BorderAroundImg=").at(1).split("\n").at(0).toInt();

			if(all.contains("HideCounter=1"))
				hidecounter = true;
			else if(all.contains("HideCounter=0"))
				hidecounter = false;

			if(all.contains("HideFilepathShowFilename=1"))
				hidefilepathshowfilename = true;
			else if(all.contains("HideFilepathShowFilename=0"))
				hidefilepathshowfilename = false;

			if(all.contains("HideFilename=1"))
				hidefilename = true;
			else if(all.contains("HideFilename=0"))
				hidefilename = false;

			if(all.contains("HideX=1"))
				hidex = true;
			else if(all.contains("HideX=0"))
				hidex = false;

			if(all.contains("ThumbnailSize="))
				thumbnailsize = all.split("ThumbnailSize=").at(1).split("\n").at(0).toInt();

			if(all.contains("ThumbnailPosition="))
				thumbnailposition = all.split("ThumbnailPosition=").at(1).split("\n").at(0);

			if(all.contains("ThumbnailCache=1"))
				thumbnailcache = true;
			else if(all.contains("ThumbnailCache=0"))
				thumbnailcache = false;

			if(all.contains("ThbCacheFile=1"))
				thbcachefile = true;
			else if(all.contains("ThbCacheFile=0"))
				thbcachefile = false;

			if(all.contains("ThumbnailSpacingBetween="))
				thumbnailSpacingBetween = all.split("ThumbnailSpacingBetween=").at(1).split("\n").at(0).toInt();
			// That below the old property
			else if(all.contains("ThumbnailBorderAround="))
				thumbnailSpacingBetween = all.split("ThumbnailBorderAround=").at(1).split("\n").at(0).toInt();

			if(all.contains("ThumbnailLiftUp="))
				thumbnailLiftUp = all.split("ThumbnailLiftUp=").at(1).split("\n").at(0).toInt();

			if(all.contains("ThumbnailKeepVisible=1"))
				thumbnailKeepVisible = true;
			else if(all.contains("ThumbnailKeepVisible=0"))
				thumbnailKeepVisible = false;

			if(all.contains("ThumbnailDynamic=1"))
				thumbnailDynamic = true;
			else if(all.contains("ThumbnailDynamic=0"))
				thumbnailDynamic = false;

			if(all.contains("ThumbnailFilenameInstead=1"))
				thumbnailFilenameInstead = true;
			else if(all.contains("ThumbnailFilenameInstead=0"))
				thumbnailFilenameInstead = false;

			if(all.contains("ThumbnailFilenameInsteadFontSize="))
				thumbnailFilenameInsteadFontSize = all.split("ThumbnailFilenameInsteadFontSize=").at(1).split("\n").at(0).toInt();

			if(all.contains("ThumbnailDisable=1"))
				thumbnailDisable = true;
			else if(all.contains("ThumbnailDisable=0"))
				thumbnailDisable = false;


			if(all.contains("SlideShowTime="))
				slideShowTime = all.split("SlideShowTime=").at(1).split("\n").at(0).toInt();

			if(all.contains("SlideShowTransition="))
				slideShowTransition = all.split("SlideShowTransition=").at(1).split("\n").at(0).toInt();

			if(all.contains("SlideShowMusicFile="))
				slideShowMusicFile = all.split("SlideShowMusicFile=").at(1).split("\n").at(0).trimmed();

			if(all.contains("SlideShowHideQuickinfo="))
				slideShowHideQuickinfo = bool(all.split("SlideShowHideQuickinfo=").at(1).split("\n").at(0).toInt());

			if(all.contains("WallpaperAlignment="))
				wallpaperAlignment =  all.split("WallpaperAlignment=").at(1).split("\n").at(0);
			if(all.contains("WallpaperScale="))
				wallpaperScale = all.split("WallpaperScale=").at(1).split("\n").at(0);


			if(all.contains("ExifEnableMouseTriggering=1"))
				exifenablemousetriggering = true;
			else if(all.contains("ExifEnableMouseTriggering=0"))
				exifenablemousetriggering = false;

			if(all.contains("ExifFontSize="))
				exiffontsize = all.split("ExifFontSize=").at(1).split("\n").at(0).toInt();

			if(all.contains("ExifFilename=1"))
				exiffilename = true;
			else if(all.contains("ExifFilename=0"))
				exiffilename = false;

			if(all.contains("ExifFiletype=1"))
				exiffiletype = true;
			else if(all.contains("ExifFiletype=0"))
				exiffiletype = false;

			if(all.contains("ExifFilesize=1"))
				exiffilesize = true;
			else if(all.contains("ExifFilesize=0"))
				exiffilesize = false;

			if(all.contains("ExifDimensions=1"))
				exifdimensions = true;
			else if(all.contains("ExifDimensions=0"))
				exifdimensions = false;

			if(all.contains("ExifMake=1"))
				exifmake = true;
			else if(all.contains("ExifMake=0"))
				exifmake = false;

			if(all.contains("ExifModel=1"))
				exifmodel = true;
			else if(all.contains("ExifModel=0"))
				exifmodel = false;

			if(all.contains("ExifSoftware=1"))
				exifsoftware = true;
			else if(all.contains("ExifSoftware=0"))
				exifsoftware = false;

			if(all.contains("ExifPhotoTaken=1"))
				exifphototaken = true;
			else if(all.contains("ExifPhotoTaken=0"))
				exifphototaken = false;

			if(all.contains("ExifExposureTime=1"))
				exifexposuretime = true;
			else if(all.contains("ExifExposureTime=0"))
				exifexposuretime = false;

			if(all.contains("ExifFlash=1"))
				exifflash = true;
			else if(all.contains("ExifFlash=0"))
				exifflash = false;

			if(all.contains("ExifIso=1"))
				exifiso = true;
			else if(all.contains("ExifIso=0"))
				exifiso = false;

			if(all.contains("ExifSceneType=1"))
				exifscenetype = true;
			else if(all.contains("ExifSceneType=0"))
				exifscenetype = false;

			if(all.contains("ExifFLength=1"))
				exifflength = true;
			else if(all.contains("ExifFLength=0"))
				exifflength = false;

			if(all.contains("ExifFNumber=1"))
				exiffnumber = true;
			else if(all.contains("ExifFNumber=0"))
				exiffnumber = false;

			if(all.contains("ExifLightSource=1"))
				exiflightsource = true;
			else if(all.contains("ExifLightSource=0"))
				exiflightsource = false;

			if(all.contains("ExifGps=1"))
				exifgps = true;
			else if(all.contains("ExifGps=0"))
				exifgps = false;

			if(all.contains("ExifRotation="))
				exifrotation = all.split("ExifRotation=").at(1).split("\n").at(0);

			if(all.contains("ExifGPSMapService="))
				exifgpsmapservice = all.split("ExifGPSMapService=").at(1).split("\n").at(0);

			file.close();

		}

	}

	// Save settings
	void saveSettings(QMap<QString,bool> applySet = QMap<QString,bool>()) {

		QFile file(QDir::homePath() + "/.photoqt/settings");

		if(!file.open(QIODevice::ReadWrite))

			qDebug() << "ERROR saving settings";

		else {

			if(verbose) qDebug() << "Save Settings";

			file.close();
			file.remove();
			file.open(QIODevice::ReadWrite);

			QTextStream out(&file);

			QString cont = "Version=" + version + "\n";
			cont += QString("Language=%1\n").arg(language);
//			cont += QString("KnownFileTypes=%1\n").arg(knownFileTypes);

			fileFormats->saveFormats(knownFileTypes);

			cont += "\n[Look]\n";

			cont += QString("Composite=%1\n").arg(int(composite));
			cont += QString("BgColorRed=%1\n").arg(bgColorRed);
			cont += QString("BgColorGreen=%1\n").arg(bgColorGreen);
			cont += QString("BgColorBlue=%1\n").arg(bgColorBlue);
			cont += QString("BgColorAlpha=%1\n").arg(bgColorAlpha);
			cont += QString("BackgroundImageScreenshot=%1\n").arg(backgroundImageScreenshot);
			cont += QString("BackgroundImageUse=%1\n").arg(backgroundImageUse);
			cont += QString("BackgroundImagePath=%1\n").arg(backgroundImagePath);
			cont += QString("BackgroundImageScale=%1\n").arg(backgroundImageScale);
			cont += QString("BackgroundImageStretch=%1\n").arg(backgroundImageStretch);
			cont += QString("BackgroundImageCenter=%1\n").arg(backgroundImageCenter);

			cont += "\n[Behaviour]\n";

			cont += QString("TrayIcon=%1\n").arg(int(trayicon));
			cont += QString("Transition=%1\n").arg(transition);
			cont += QString("LoopThroughFolder=%1\n").arg(int(loopthroughfolder));
			cont += QString("MenuSensitivity=%1\n").arg(menusensitivity);
			cont += QString("CloseOnGrey=%1\n").arg(int(closeongrey));
			cont += QString("BorderAroundImg=%1\n").arg(borderAroundImg);

			cont += "\n[Path]\n";

			cont += QString("HideCounter=%1\n").arg(int(hidecounter));
			cont += QString("HideFilepathShowFilename=%1\n").arg(int(hidefilepathshowfilename));
			cont += QString("HideFilename=%1\n").arg(int(hidefilename));
			cont += QString("HideX=%1\n").arg(int(hidex));

			cont += "\n[Thumbnail]\n";

			cont += QString("ThumbnailSize=%1\n").arg(thumbnailsize);
			cont += QString("ThumbnailPosition=%1\n").arg(thumbnailposition);
			cont += QString("ThumbnailCache=%1\n").arg(int(thumbnailcache));
			cont += QString("ThbCacheFile=%1\n").arg(int(thbcachefile));
			cont += QString("ThumbnailSpacingBetween=%1\n").arg(thumbnailSpacingBetween);
			cont += QString("ThumbnailLiftUp=%1\n").arg(thumbnailLiftUp);
			cont += QString("ThumbnailKeepVisible=%1\n").arg(thumbnailKeepVisible);
			cont += QString("ThumbnailDynamic=%1\n").arg(thumbnailDynamic);
			cont += QString("ThumbnailFilenameInstead=%1\n").arg(int(thumbnailFilenameInstead));
			cont += QString("ThumbnailFilenameInsteadFontSize=%1\n").arg(thumbnailFilenameInsteadFontSize);
			cont += QString("ThumbnailDisable=%1\n").arg(thumbnailDisable);

			cont += "\n[Slideshow]\n";

			cont += QString("SlideShowTime=%1\n").arg(slideShowTime);
			cont += QString("SlideShowTransition=%1\n").arg(slideShowTransition);
			cont += QString("SlideShowMusicFile=%1\n").arg(slideShowMusicFile);
			cont += QString("SlideShowHideQuickinfo=%1\n").arg(int(slideShowHideQuickinfo));

			cont += "\n[Wallpaper]\n";

			cont += QString("WallpaperAlignment=%1\n").arg(wallpaperAlignment);
			cont += QString("WallpaperScale=%1\n").arg((wallpaperScale));

			cont += "\n[Exif]\n";

			cont += QString("ExifEnableMouseTriggering=%1\n").arg(int(exifenablemousetriggering));
			cont += QString("ExifFontSize=%1\n").arg(exiffontsize);
			cont += QString("ExifFilename=%1\n").arg(int(exiffilename));
			cont += QString("ExifFiletype=%1\n").arg(int(exiffiletype));
			cont += QString("ExifFilesize=%1\n").arg(int(exiffilesize));
			cont += QString("ExifDimensions=%1\n").arg(int(exifdimensions));
			cont += QString("ExifMake=%1\n").arg(int(exifmake));
			cont += QString("ExifModel=%1\n").arg(int(exifmodel));
			cont += QString("ExifSoftware=%1\n").arg(int(exifsoftware));
			cont += QString("ExifPhotoTaken=%1\n").arg(int(exifphototaken));
			cont += QString("ExifExposureTime=%1\n").arg(int(exifexposuretime));
			cont += QString("ExifFlash=%1\n").arg(int(exifflash));
			cont += QString("ExifIso=%1\n").arg(int(exifiso));
			cont += QString("ExifSceneType=%1\n").arg(int(exifscenetype));
			cont += QString("ExifFLength=%1\n").arg(int(exifflength));
			cont += QString("ExifFNumber=%1\n").arg(int(exiffnumber));
			cont += QString("ExifLightSource=%1\n").arg(int(exiflightsource));
			cont += QString("ExifGps=%1\n").arg(int(exifgps));
			cont += QString("ExifRotation=%1\n").arg(exifrotation);
			cont += QString("ExifGPSMapService=%1\n").arg(exifgpsmapservice);

			out << cont;
			file.close();

			// Send update out
			emit updateSettingsData(toSignalOut());
			emit updateSettingsToApply(applySet);

		}

	}

public slots:
	// The settings have been updated (take over new values)
	void settingsUpdated(QMap<QString,QVariant> changedSet) {

		QMap<QString,bool> applySet;

		applySet.insert("background",false);
		applySet.insert("menu",false);
		applySet.insert("quickinfo",false);
		applySet.insert("redrawimg",false);
		applySet.insert("thumb",false);
		applySet.insert("exif",false);
		applySet.insert("open",false);

		if(changedSet.keys().contains("Version"))
			version = changedSet.value("Version").toString();

//		if(changedSet.keys().contains("KnownFileTypes"))
//			knownFileTypes = changedSet.value("KnownFileTypes").toString();

		if(changedSet.keys().contains("Language"))
			language = changedSet.value("Language").toString();


		if(changedSet.keys().contains("BgColorRed")) {
			bgColorRed = changedSet.value("BgColorRed").toInt();
			applySet["background"] = true;
		}
		if(changedSet.keys().contains("BgColorGreen")) {
			bgColorGreen = changedSet.value("BgColorGreen").toInt();
			applySet["background"] = true;
		}
		if(changedSet.keys().contains("BgColorBlue")) {
			bgColorBlue = changedSet.value("BgColorBlue").toInt();
			applySet["background"] = true;
		}
		if(changedSet.keys().contains("BgColorAlpha")) {
			bgColorAlpha = changedSet.value("BgColorAlpha").toInt();
			applySet["background"] = true;
		}

		if(changedSet.keys().contains("BackgroundImageScreenshot")) {
			backgroundImageScreenshot = changedSet.value("BackgroundImageScreenshot").toBool();
			applySet["background"] = true;
		}

		if(changedSet.keys().contains("BackgroundImagePath")) {
			backgroundImagePath = changedSet.value("BackgroundImagePath").toString();
			applySet["background"] = true;
		}
		if(changedSet.keys().contains("BackgroundImageUse")) {
			backgroundImageUse = changedSet.value("BackgroundImageUse").toBool();
			applySet["background"] = true;
		}
		if(changedSet.keys().contains("BackgroundImageScale")) {
			backgroundImageScale = changedSet.value("BackgroundImageScale").toBool();
			applySet["background"] = true;
		}
		if(changedSet.keys().contains("BackgroundImageStretch")) {
			backgroundImageStretch = changedSet.value("BackgroundImageStretch").toBool();
			applySet["background"] = true;
		}
		if(changedSet.keys().contains("BackgroundImageCenter")) {
			backgroundImageCenter = changedSet.value("BackgroundImageCenter").toBool();
			applySet["background"] = true;
		}

		if(changedSet.keys().contains("Composite")) {
			composite = changedSet.value("Composite").toBool();
			applySet["background"] = true;
		}


		if(changedSet.keys().contains("TrayIcon"))
			trayicon = changedSet.value("TrayIcon").toBool();

		if(changedSet.keys().contains("Transition"))
			transition = changedSet.value("Transition").toInt();

		if(changedSet.keys().contains("LoopThroughFolder"))
			loopthroughfolder = changedSet.value("LoopThroughFolder").toBool();

		if(changedSet.keys().contains("MenuSensitivity")) {
			menusensitivity = changedSet.value("MenuSensitivity").toInt();
			applySet["menu"] = true;
		}
		if(changedSet.keys().contains("CloseOnGrey"))
			closeongrey = changedSet.value("CloseOnGrey").toBool();

		if(changedSet.keys().contains("BorderAroundImg")) {
			borderAroundImg = changedSet.value("BorderAroundImg").toInt();
			applySet["redrawimg"] = true;
		}

		if(changedSet.keys().contains("HideCounter")) {
			hidecounter = changedSet.value("HideCounter").toBool();
			applySet["quickinfo"] = true;
		}
		if(changedSet.keys().contains("HideFilename")) {
			hidefilename = changedSet.value("HideFilename").toBool();
			applySet["quickinfo"] = true;
		}
		if(changedSet.keys().contains("HideFilepathShowFilename")) {
			hidefilepathshowfilename = changedSet.value("HideFilepathShowFilename").toBool();
			applySet["quickinfo"] = true;
		}
		if(changedSet.keys().contains("HideX")) {
			hidex = changedSet.value("HideX").toBool();
			applySet["quickinfo"] = true;
		}

		if(changedSet.keys().contains("ThumbnailSize")) {
			thumbnailsize = changedSet.value("ThumbnailSize").toInt();
			applySet["thumb"] = true;
		}
		if(changedSet.keys().contains("ThumbnailPosition")) {
			thumbnailposition = changedSet.value("ThumbnailPosition").toString();
			applySet["thumb"] = true;
		}
		if(changedSet.keys().contains("ThumbnailCache"))
			thumbnailcache = changedSet.value("ThumbnailCache").toBool();
		if(changedSet.keys().contains("ThbCacheFile"))
			thbcachefile = changedSet.value("ThbCacheFile").toBool();
		if(changedSet.keys().contains("ThumbnailSpacingBetween")) {
			thumbnailSpacingBetween = changedSet.value("ThumbnailSpacingBetween").toInt();
			applySet["thumb"] = true;
		}
		if(changedSet.keys().contains("ThumbnailLiftUp")) {
			thumbnailLiftUp = changedSet.value("ThumbnailLiftUp").toInt();
			applySet["thumb"] = true;
		}
		if(changedSet.keys().contains("ThumbnailKeepVisible")) {
			thumbnailKeepVisible = changedSet.value("ThumbnailKeepVisible").toBool();
			applySet["thumb"] = true;
			applySet["redrawimg"] = true;
		}
		if(changedSet.keys().contains("ThumbnailDynamic"))
			thumbnailDynamic = changedSet.value("ThumbnailDynamic").toBool();
		if(changedSet.keys().contains("ThumbnailFilenameInstead")) {
			thumbnailFilenameInstead = changedSet.value("ThumbnailFilenameInstead").toBool();
			applySet["thumb"] = true;
		}
		if(changedSet.keys().contains("ThumbnailFilenameInsteadFontSize")) {
			thumbnailFilenameInsteadFontSize = changedSet.value("ThumbnailFilenameInsteadFontSize").toInt();
			applySet["thumb"] = true;
		}
		if(changedSet.keys().contains("ThumbnailDisable")) {
			thumbnailDisable = changedSet.value("ThumbnailDisable").toBool();
			applySet["thumb"] = true;
		}


		if(changedSet.keys().contains("SlideShowTime"))
			slideShowTime = changedSet.value("SlideShowTime").toInt();

		if(changedSet.keys().contains("SlideShowTransition"))
			slideShowTransition = changedSet.value("SlideShowTransition").toInt();

		if(changedSet.keys().contains("SlideShowMusicFile"))
			slideShowMusicFile = changedSet.value("SlideShowMusicFile").toString();

		if(changedSet.keys().contains("SlideShowHideQuickinfo"))
			slideShowHideQuickinfo = changedSet.value("SlideShowHideQuickinfo").toBool();



		if(changedSet.keys().contains("WallpaperAlignment"))
			wallpaperAlignment = changedSet.value("WallpaperAlignment").toString();

		if(changedSet.keys().contains("WallpaperScale"))
			wallpaperScale = changedSet.value("WallpaperScale").toString();



		if(changedSet.keys().contains("ExifEnableMouseTriggering")) {
			exifenablemousetriggering = changedSet.value("ExifEnableMouseTriggering").toBool();
			applySet["exif"] = true;
		}
		if(changedSet.keys().contains("ExifFontSize")) {
			exiffontsize = changedSet.value("ExifFontSize").toInt();
			applySet["exif"] = true;
		}
		if(changedSet.keys().contains("ExifFilename")) {
			exiffilename = changedSet.value("ExifFilename").toBool();
			applySet["exif"] = true;
		}
		if(changedSet.keys().contains("ExifFiletype")) {
			exiffiletype = changedSet.value("ExifFiletype").toBool();
			applySet["exif"] = true;
		}
		if(changedSet.keys().contains("ExifFilesize")) {
			exiffilesize = changedSet.value("ExifFilesize").toBool();
			applySet["exif"] = true;
		}
		if(changedSet.keys().contains("ExifDimensions")) {
			exifdimensions = changedSet.value("ExifDimensions").toBool();
			applySet["exif"] = true;
		}
		if(changedSet.keys().contains("ExifMake")) {
			exifmake = changedSet.value("ExifMake").toBool();
			applySet["exif"] = true;
		}
		if(changedSet.keys().contains("ExifModel")) {
			exifmodel = changedSet.value("ExifModel").toBool();
			applySet["exif"] = true;
		}
		if(changedSet.keys().contains("ExifSoftware")) {
			exifsoftware = changedSet.value("ExifSoftware").toBool();
			applySet["exif"] = true;
		}
		if(changedSet.keys().contains("ExifPhotoTaken")) {
			exifphototaken = changedSet.value("ExifPhotoTaken").toBool();
			applySet["exif"] = true;
		}
		if(changedSet.keys().contains("ExifExposureTime")) {
			exifexposuretime = changedSet.value("ExifExposureTime").toBool();
			applySet["exif"] = true;
		}
		if(changedSet.keys().contains("ExifFlash")) {
			exifflash = changedSet.value("ExifFlash").toBool();
			applySet["exif"] = true;
		}
		if(changedSet.keys().contains("ExifIso")) {
			exifiso = changedSet.value("ExifIso").toBool();
			applySet["exif"] = true;
		}
		if(changedSet.keys().contains("ExifSceneType")) {
			exifscenetype = changedSet.value("ExifSceneType").toBool();
			applySet["exif"] = true;
		}
		if(changedSet.keys().contains("ExifFLength")) {
			exifflength = changedSet.value("ExifFLength").toBool();
			applySet["exif"] = true;
		}
		if(changedSet.keys().contains("ExifFNumber")) {
			exiffnumber = changedSet.value("ExifFNumber").toBool();
			applySet["exif"] = true;
		}
		if(changedSet.keys().contains("ExifLightSource")) {
			exiflightsource = changedSet.value("ExifLightSource").toBool();
			applySet["exif"] = true;
		}
		if(changedSet.keys().contains("ExifGps")) {
			exifgps = changedSet.value("ExifGps").toBool();
			applySet["exif"] = true;
		}
		if(changedSet.keys().contains("ExifRotation")) {
			exifrotation = changedSet.value("ExifRotation").toString();
			applySet["exif"] = true;
		}
		if(changedSet.keys().contains("ExifGPSMapService")) {
			exifgpsmapservice = changedSet.value("ExifGPSMapService").toString();
			applySet["exif"] = true;
		}

		if(verbose) qDebug() << "Settings changed:" << applySet;

		saveSettings(applySet);

	}

signals:
	// Settings have been updated
	void updateSettingsData(QMap<QString,QVariant>);
	void updateSettingsToApply(QMap<QString,bool>);

};

#endif // GLOBALSETTINGS_H
