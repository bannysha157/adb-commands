**ADB device**
        


Microsoft Windows [Version 10.0.19042.1586]
(c) Microsoft Corporation. All rights reserved.

C:\Users\dell\Downloads\adb\platform-tools>adb devices
List of devices attached
jfqgguvot8ukbann        device


C:\Users\dell\Downloads\adb\platform-tools>adb devices -l
List of devices attached
jfqgguvot8ukbann       device product:begoniain model:Redmi_Note_8_Pro device:begoniain transport_id:1
  
**ADB SHELL**

C:\Users\dell\Downloads\adb\platform-tools>adb shell
begoniain:/ $ ls
acct        data              init.environ.rc                    init.miui.post_boot.sh     oem      system_ext
apex        data_mirror       init.exaid.hardware.rc             init.miui.qadaemon.rc      proc     vendor
bin         debug_ramdisk     init.mi_thermald.rc                init.miui.rc               product  verity_key
bugreports  default.prop      init.miui.cust.rc                  init.recovery.hardware.rc  res
cache       dev               init.miui.early_boot.sh            linkerconfig               sdcard
config      etc               init.miui.google_revenue_share.rc  lost+found                 storage
cust        init              init.miui.nativedebug.rc           mnt                        sys
d           init.batteryd.rc  init.miui.perf_init.rc             odm                        system
begoniain:/ $
C:\Users\dell\Downloads\adb\platform-tools>cd sdcard
The system cannot find the path specified.

C:\Users\dell\Downloads\adb\platform-tools>adb shell
begoniain:/ $ ls
acct        data              init.environ.rc                    init.miui.post_boot.sh     oem      system_ext
apex        data_mirror       init.exaid.hardware.rc             init.miui.qadaemon.rc      proc     vendor
bin         debug_ramdisk     init.mi_thermald.rc                init.miui.rc               product  verity_key
bugreports  default.prop      init.miui.cust.rc                  init.recovery.hardware.rc  res
cache       dev               init.miui.early_boot.sh            linkerconfig               sdcard
config      etc               init.miui.google_revenue_share.rc  lost+found                 storage
cust        init              init.miui.nativedebug.rc           mnt                        sys
d           init.batteryd.rc  init.miui.perf_init.rc             odm                        system
begoniain:/ $ cd sdcard
begoniain:/sdcard $ lds
/system/bin/sh: lds: inaccessible or not found
127|begoniain:/sdcard $ ls
Android                                                  PDFfiles           bluetooth
BroChill                                                 PLAYit             browser
CamScanner                                               Photo\ Collage     bytedance
Cardboard                                                Pictures           com.UCMobile.intl
DCIM                                                     PushSdkDefaultLog  dctp
Dcoder                                                   Ringtones          deviceId.txt
Download                                                 SHAREit            did
FileExplorer                                             ShareChat-Media    documents
Fonts                                                    Snapchat           eclipse-java-helios-SR1-win32
GBWhatsApp(07122020_1929)                                Telegram           inShare
GBWhatsApp(08122020_0906)                                UCDownloads        inshot
IMG-20210415-WA0109.7f2ea769b8371b40b45a788b1e80ae88.sa  UCMusic            mAst
IMG_20210401_152512.d55e3467129c90986131f581006abbda.sa  VMate              mace_run
JavaNIDE                                                 VidMate            media
KineMaster                                               Wynk               mp3cutter
MIUI                                                     Xiaomi             supercache
MiVideoGlobal                                            amap               voip-data
Movies                                                   backups            whatsapp
Music                                                    base
Notifications                                            bfly
begoniain:/sdcard $ cd D
DCIM/      Dcoder/    Download/
begoniain:/sdcard $ cd M
/system/bin/sh: cd: /sdcard/M: No such file or directory
2|begoniain:/sdcard $ cd m
/system/bin/sh: cd: /sdcard/m: No such file or directory
2|begoniain:/sdcard $ cd m
mAst/       mace_run/   media/      mp3cutter/
2|begoniain:/sdcard $ cd m
/system/bin/sh: cd: /sdcard/m: No such file or directory
2|begoniain:/sdcard $ cd Download/
begoniain:/sdcard/Download $ ls
0008b71e4ad24d39a02e54a1dd84228f.mp3
02fcede2c8a848078bddac65ccf01427.mp3
02fe8ef4ecd7423e8a8bb3efe635f33b.mp3
0ad6de94aa9b492eae5e3993e6d9aa25.mp3
14-\ Processes-\ Data\ Structures\ -\ Process\ Table\ &\ PCB\ -\ Operating\ System.pdf
14dbd864deff4efa8f711f523846c079.mp3
1628084146407Resume_Manyapu.pdf
1628084399637Resume_Manyapu.pdf
2014_Bookmatter_DigitalSignalProcessingWithFie.pdf
2020-1102020(1).pdf
46f5457795cb40299b9a5753c8e67c85.mp3
74HC238-3-to-8-decoder-demultiplexer-datasheet.pdf
7e7e6034f12f4960b6d5fe4cfd795f06.mp3
8085programs.pdf
8259A\ (1).pdf
8259A\ (2).pdf
8259A.pdf
993053e48baf44b4bdee0d84d7cb35d3.mp3
9ca818c350bf46b8a73d9ebe02d7c30d.mp3
Applications.pdf
Banny.pdf
Bannysha\ certificates.pdf
Basic\ Information\ (1)\ (1).xlsx
Basic\ Information\ (1).xlsx
Basic\ Information.xlsx
Beely_Lyrics-081120-093734.mp3
Beely_Slideshow-180820-045756.mp3
Browser
Chapter02.PPT
DJ-Tillu-k6str-2022\ (1).mp4
Datasheets.rar
FINAL_PROJECT.zip
Foxmail\ client\ setup\ Guide\ for\ TS\ Mail.pdf
IJETT-V8P214.pdf
IMG-20220121-WA0022.jpg
InShot_20200716_100805634.mp3
InShot_20200818_162620354.mp3
KM44AESD16-Bannysha(3).pdf
KM44AESD16-Bannysha.pdf
Khiladi-h5gds-2022.mp4
LT-Infotech-Aptitude.pdf
Lecture+06-TypesVarsConsts.ppt
Logic-IC-List.pdf
MANYAPU\ BANNYSHA\ -\ OFFER\ LETTER\ (1).pdf
MANYAPU\ BANNYSHA\ -\ OFFER\ LETTER\ (2).pdf
MANYAPU\ BANNYSHA\ -\ OFFER\ LETTER\ (3).pdf
MANYAPU\ BANNYSHA\ -\ OFFER\ LETTER.pdf
MANYAPU\ BANNYSHA\ -\ SALARY\ STRUCTURE.xlsx
MANYAPU\ BANNYSHA_FRESHER.docx
MANYAPU\ BANNYSHA_FRESHER.pdf
Manasantha_nuvve_clock_ringtone_|_Uday_kiran_|_RP_Patnaik(1080p).mp3
Microprocessor-Lab-Manual.docx
NCR-Placement.pdf
Nano-Technology.pdf
POINTERS\ TO\ STRUCTURES.pptx
Process\ and\ Attributes.pptx
R161107112020.pdf
R16B.TECHECEIVYearSyllabus.pdf
Resume.pdf
Richard\ Reese-Understanding\ and\ Using\ C\ Pointers-O'Reilly\ Media\ (2013).pdf
SEMINAR\ ON\ EMBEDDED\ SYSTEM\ IN\ AUTOMOBILE\ ppt.pptx
SEMINAR\ aug\ (1).pptx
SEMINAR\ aug.pptx
Scanner\ Go_10-11-2021-23.43.33.pdf
Scanner\ Go_13-11-2021-8.58.37.pdf
TS\ Mail\ Setup\ steps\ for\ Android\ Mobile\ using\ Gmail\ App.docx
TS-ResumeFormat\ (1).docx
TS-ResumeFormat.docx
TURBO\ ENCODER.pptx
Technical-AMI-Sample-Placement-Test-Question-Paper.pdf
Technical-Subjects-Placement-Papers.pdf
Thakita-Thadhimi-S.P.-Balasubrahmanyam_1.mp3
VID-20200720-WA0016.mp3
VID-20200903-WA0003.mp3
VID-20200905-WA0010.mp3
VID-20200909-WA0057.mp3
VID-20200911-WA0075.mp3
VID-20200914-WA0189.mp3
VID-20200917-WA0088.mp3
VID-20200930-WA0211.mp3
VID-20201128-WA0006.mp3
VID-20201129-WA0007.mp3
VID-20201208-WA0106.mp3
VID-20201211-WA0001.mp3
VID-20201217-WA0005.mp3
VID-20201217-WA0017.mp3
VID-20210208-WA0089.mp3
VID-20210214-WA0075.mp3
VID-20210406-WA0012.mp3
VID-20210406-WA0013.mp3
VID-20210718-WA0023.mp3
VID_131601001_084536_256.mp3
VSCodeUserSetup-ia32-1.52.1.exe
Verilog-Synthesis-Examplesx2.pdf
a(1).out
a.out
arusoaie2010\ (1).pdf
arusoaie2010.pdf
c445e52b3d884c409640904ee8c6076c.mp3
c681870b1b304c798ba73cbcfc07b867.mp3
d58cee9fe39544388bc0d0554c653505.mp3
doc02537120220121104450-combined\ (1).pdf
doc02537120220121104450-combined.pdf
doc02537120220121104450.pdf
doc02537220220121104527\ (1).pdf
doc02537220220121104527.pdf
doc02537320220121104720\ (1).pdf
doc02537320220121104720.pdf
doc02537420220121104750\ (1).pdf
doc02537420220121104750.pdf
doc02537520220121104812\ (1).pdf
doc02537520220121104812.pdf
doc02538720220121114651.pdf
doc02538820220121114733.pdf
doc02538920220121114804.pdf
doc02540020220121124645.pdf
download
downloaded_rom
f272f5d59a3146cca0208e5f08b0fd5f.mp3
invite.ics
invite.ics\ (1)
invite.ics\ (2)
lab10(1).pdf
lab10.pdf
lec04.pdf
photo.pdf
plastic-solar-cells\ (1).pdf
sprugp1.pdf
test.pcm
theme
begoniain:/sdcard/Download $ exit

C:\Users\dell\Downloads\adb\platform-tools>adb push C:\Users\dell\Documents\adb_practise\abc.txt /sdcard/Download
C:\Users\dell\Documents\adb_practise\abc.txt: 1 file pushed, 0 skipped. 0.0 MB/s (42 bytes in 0.002s)

**ADB TEXT INPUT**

C:\Users\dell\Downloads\adb\platform-tools>adb shell input text "1234"

C:\Users\dell\Downloads\adb\platform-tools>adb shell input text "bannydivya"

C:\Users\dell\Downloads\adb\platform-tools>adb shell input text "bannydivya"

C:\Users\dell\Downloads\adb\platform-tools>adb shell pm list packages
package:com.miui.screenrecorder
package:com.mediatek.ims
package:com.mediatek.op01.phone.plugin
package:com.skype.raider
package:com.android.cts.priv.ctsshim
package:com.jio.media.jiobeats
package:com.google.android.youtube
package:com.android.internal.display.cutout.emulation.corner
package:com.google.android.ext.services
package:com.android.internal.display.cutout.emulation.double
package:com.android.providers.telephony
package:naukriApp.appModules.login
package:com.android.dynsystem
package:com.miui.powerkeeper
package:com.goodix.fingerprint
package:com.camerasideas.instashot
package:com.xiaomi.miplay_client
package:com.android.theme.icon.pebble
package:com.google.android.googlequicksearchbox
package:cn.wps.xiaomi.abroad.lite
package:com.miui.fm
package:com.cyberlink.youperfect
package:com.android.providers.calendar
package:com.mediatek.telephony
package:org.telegram.messenger
package:com.android.providers.media
package:com.milink.service
package:com.google.android.apps.docs.editors.docs
package:com.android.networkstack.tethering.overlay
package:com.phonepe.app
package:com.google.android.onetimeinitializer
package:com.google.android.ext.shared
package:com.playit.videoplayer
package:com.android.internal.systemui.navbar.gestural_wide_back
package:com.mediatek.location.lppe.main
package:com.xiaomi.powerchecker
package:com.xiaomi.account
package:com.android.wallpapercropper
package:com.bsp.catchlog
package:com.android.theme.icon.vessel
package:com.xiaomi.cameratools
package:com.android.theme.color.cinnamon
package:com.mediatek.SettingsProviderResOverlay
package:miui.systemui.plugin
package:com.xiaomi.mi_connect_service
package:com.sololearn
package:com.xiaomi.micloud.sdk
package:com.mediatek.systemuiresoverlay
package:com.android.theme.icon_pack.rounded.systemui
package:com.android.networkstack.tethering.inprocess.overlay
package:com.android.theme.icon.taperedrect
package:com.myairtelapp
package:com.android.updater
package:com.android.wifi.resources.overlay
package:com.android.externalstorage
package:com.mediatek.ygps
package:com.paprbit.dcoder
package:com.android.htmlviewer
package:com.miui.extraphoto
package:com.miui.securityadd
package:com.whatsapp
package:com.android.companiondevicemanager
package:com.miui.gallery
package:com.duy.compiler.javanide
package:com.android.mms.service
package:com.miui.msa.global
package:com.android.providers.downloads
package:com.xiaomi.payment
package:com.google.android.networkstack.tethering.overlay
package:com.miui.securitycenter
package:com.mediatek.engineermode
package:com.android.theme.icon_pack.rounded.android
package:w3bminds.engVarta.app
package:com.netflix.partner.activation
package:com.mediatek.omacp
package:com.deep.smartcalculator
package:com.android.networkstack.inprocess.overlay
package:com.android.browser
package:com.bsbportal.music
package:com.miui.videoplayer
package:com.android.theme.icon_pack.circular.themepicker
package:com.google.android.configupdater
package:com.android.systemui.icon.overlay
package:in.amazon.mShop.android.shopping
package:com.google.android.overlay.modules.permissioncontroller
package:com.W3school.Anbu
package:com.android.soundrecorder
package:com.miui.guardprovider
package:com.infrasoft.uboi
package:com.magiear.handsfree.assistant
package:com.google.ar.core
package:com.google.ar.lens
package:com.android.providers.downloads.ui
package:com.android.vending
package:com.android.pacprocessor
package:com.android.simappdialog
package:com.miui.backup
package:com.android.settings.overlay.miui
package:com.miui.notification
package:com.youdao.hindict
package:com.allgovernmentjobs
package:com.miui.micloudsync
package:com.android.internal.display.cutout.emulation.hole
package:com.android.internal.display.cutout.emulation.tall
package:com.miui.daemon
package:android.autoinstalls.config.Xiaomi.begoniain
package:com.android.networkstack.overlay
package:com.flipkart.android
package:com.android.certinstaller
package:com.android.theme.color.black
package:com.android.carrierconfig
package:com.google.android.marvin.talkback
package:com.android.theme.color.green
package:com.android.theme.color.ocean
package:com.android.theme.color.space
package:com.android.internal.systemui.navbar.threebutton
package:com.google.android.apps.work.oobconfig
package:us.zoom.videomeetings
package:com.logmein.gotowebinar
package:android
package:com.android.hotwordenrollment.xgoogle
package:com.android.systemui.notch.overlay
package:com.android.contacts
package:com.miui.hybrid
package:android.miui.overlay
package:com.miui.securitycore
package:com.mediatek.emcamera
package:com.android.theme.icon_pack.rounded.launcher
package:com.snapwork.hdfc
package:com.android.egg
package:com.android.mms
package:com.android.mtp
package:com.android.ons
package:com.android.stk
package:com.android.backupconfirm
package:com.xiaomi.simactivate.service
package:com.amazon.dee.app
package:com.instagram.android
package:com.goodix.gftest
package:com.kings.retailapp
package:com.miui.phrase
package:com.miui.player
package:com.miui.miservice
package:com.cam.scanner.camscanner.documentscanner
package:com.android.provision
package:com.android.statementservice
package:com.placecom.aptitudetest
package:in.startv.hotstar
package:com.google.android.gm
package:com.miui.system
package:com.google.android.apps.tachyon
package:com.google.android.overlay.gmsconfig.common
package:com.miui.cleaner
package:com.android.settings.intelligence
package:com.gotomeeting
package:com.android.calendar
package:com.mediatek.frameworkresoverlay
package:com.miui.global.packageinstaller
package:com.debug.loggerui
package:com.android.internal.systemui.navbar.gestural_extra_wide_back
package:com.olacabs.customer
package:com.google.android.permissioncontroller
package:com.miui.systemui.devices.overlay
package:com.miui.compass
package:com.google.android.setupwizard
package:com.miui.cit
package:com.miui.rom
package:com.miui.android.fashiongallery
package:com.android.providers.settings
package:com.android.sharedstoragebackup
package:com.facebook.services
package:com.xiaomi.location.fused
package:com.google.android.music
package:com.android.printspooler
package:com.android.hotwordenrollment.okgoogle
package:com.miui.misound
package:com.android.theme.icon_pack.filled.settings
package:org.ifaa.aidl.manager
package:com.android.dreams.basic
package:com.google.android.overlay.modules.ext.services
package:com.android.incallui
package:com.android.systemui.gesture.line.overlay
package:com.fido.xiaomi.uafclient
package:com.duokan.phone.remotecontroller
package:com.miui.bugreport
package:com.android.se
package:com.android.inputdevices
package:com.google.android.apps.wellbeing
package:com.fido.asm
package:ahaflix.tv
package:com.android.bips
package:com.mediatek
package:com.mxtech.videoplayer.ad
package:com.lenovo.anyshare.gps
package:com.google.android.captiveportallogin
package:com.android.theme.icon_pack.circular.settings
package:com.fingerprints.extension.service
package:com.rarlab.rar
package:com.android.musicfx
package:com.xiaomi.mircs
package:com.android.systemui.overlay.miui
package:com.google.android.apps.docs
package:com.google.android.apps.maps
package:com.google.android.modulemetadata
package:com.miui.cloudbackup
package:net.one97.paytm
package:com.miui.face.overlay.miui
package:com.android.cellbroadcastreceiver
package:com.google.android.webview
package:com.android.theme.icon.teardrop
package:app.translate.translator
package:com.google.android.overlay.modules.documentsui
package:com.google.android.networkstack
package:com.android.server.telecom
package:com.android.server.telecom.overlay.miui
package:com.google.android.syncadapters.contacts
package:com.android.cellbroadcastservice
package:com.android.theme.icon_pack.rounded.themepicker
package:com.android.keychain
package:com.android.camera
package:com.android.chrome
package:com.xiaomi.upnp
package:com.xiaomi.xmsf
package:com.android.theme.icon_pack.filled.systemui
package:com.google.android.packageinstaller
package:com.miui.mishare.connectivity
package:com.google.android.gms
package:com.google.android.gsf
package:com.google.android.tts
package:com.android.wifi.resources
package:com.android.calllogbackup
package:com.miui.freeform
package:com.google.android.partnersetup
package:android.aosp.overlay
package:com.sololearn.java
package:com.xiaomi.xmsfkeeper
package:com.android.localtransport
package:com.google.android.videos
package:com.google.android.overlay.gmsconfig.gsa
package:com.xiaomi.mipicks
package:com.xiaomi.finddevice
package:com.android.theme.font.notoserifsource
package:com.mi.global.bbs
package:sharefiles.sharemusic.shareapps.filetransfer
package:com.android.theme.icon_pack.filled.android
package:com.android.proxyhandler
package:com.xiaomi.joyose
package:com.android.internal.display.cutout.emulation.waterfall
package:com.android.theme.icon_pack.circular.systemui
package:com.mi.android.globalFileexplorer
package:com.UCMobile.intl
package:com.miui.notes
package:com.miui.wmsvc
package:com.google.android.overlay.modules.permissioncontroller.forframework
package:com.xiaomi.misettings
package:com.google.android.feedback
package:com.google.android.printservice.recommendation
package:com.xiaomi.midrop
package:com.google.android.apps.photos
package:com.google.android.syncadapters.calendar
package:com.miui.cloudservice
package:com.android.managedprovisioning
package:com.miui.hybrid.accessory
package:com.mediatek.atci.service
package:com.fingerprints.sensortesttool
package:com.android.soundpicker
package:com.atomic.apps.ringtone.cutter
package:com.mediatek.capctrl.service
package:com.tencent.soter.soterserver
package:com.google.android.documentsui
package:com.application.zomato
package:com.android.dreams.phototable
package:com.miui.audiomonitor
package:com.miui.touchassistant
package:com.google.mainline.telemetry
package:com.mediatek.callrecorder
package:com.amazon.avod.thirdpartyclient
package:com.mediatek.op09clib.telecom
package:com.larksuite.suite
package:com.android.providers.partnerbookmarks
package:com.android.smspush
package:com.mi.android.globalminusscreen
package:com.miui.calculator
package:com.mediatek.voicecommand
package:com.android.wallpaper.livepicker
package:com.miui.cloudservice.sysbase
package:com.miui.miwallpaper
package:com.facebook.system
package:com.android.systemui.navigation.bar.overlay
package:com.Slack
package:com.xiaomi.bluetooth
package:com.gaana
package:com.android.theme.icon.squircle
package:com.google.android.cellbroadcastservice.overlay.miui
package:com.alphabet.kids.alphabets
package:com.google.android.networkstack.permissionconfig
package:com.android.storagemanager
package:com.InfosysIT.MyInfy
package:com.miui.analytics
package:com.linkedin.android
package:com.android.settings
package:com.gallery.player
package:com.miui.weather2
package:com.google.android.apps.nbu.paisa.user
package:com.beely.Lyrics.videomaker.videoeditor
package:com.google.android.networkstack.overlay
package:com.cisco.webex.meetings
package:com.android.theme.icon_pack.filled.launcher
package:com.android.networkstack.tethering.inprocess
package:com.modemdebug
package:com.google.android.projection.gearhead
package:com.android.systemui.miui.optimization.overlay
package:com.xiaomi.scanner
package:com.google.android.apps.turbo
package:com.mediatek.lbs.em2.ui
package:com.ludo.king
package:com.xiaomi.calendar
package:com.android.cts.ctsshim
package:com.google.android.overlay.modules.modulemetadata.forframework
package:com.stickify.stickermaker
package:com.miui.yellowpage
package:com.android.theme.icon_pack.circular.launcher
package:com.miui.systemui.carriers.overlay
package:com.miui.systemui.overlay.devices.android
package:com.nemo.vidmate
package:com.xiaomi.bluetooth.overlay
package:com.android.vpndialogs
package:com.mediatek.op01.telecom
package:com.google.android.apps.meetings
package:com.mi.global.shop
package:com.android.phone
package:com.android.overlay.gmstelephony
package:com.android.shell
package:com.android.theme.icon_pack.filled.themepicker
package:com.android.wallpaperbackup
package:com.android.providers.blockednumber
package:com.miui.screenshot
package:com.android.overlay.gmstelecomm
package:com.micredit.in
package:com.android.providers.userdictionary
package:com.android.providers.media.module
package:com.android.emergency
package:com.android.hotspot2.osulogin
package:com.mediatek.voiceunlock
package:com.google.android.gms.location.history
package:com.intsig.camscanner
package:com.android.internal.systemui.navbar.gestural
package:com.android.location.fused
package:com.android.theme.color.orchid
package:com.android.deskclock
package:com.android.systemui
package:com.android.wifi.resources.xiaomi
package:com.android.theme.color.purple
package:com.android.bluetoothmidiservice
package:com.google.android.cellbroadcastreceiver.overlay.miui
package:com.mi.globallayout
package:com.facebook.appmanager
package:com.xiaomi.discover
package:com.bpmobile.iscanner.free
package:com.android.thememanager
package:com.mipay.wallet.in
package:com.android.traceur
package:com.codef.arrow
package:com.miui.fmservice
package:com.android.thememanager.module
package:com.lbe.security.miui
package:com.android.bluetooth
package:co.brainly
package:com.miui.newmidrive
package:com.android.providers.contacts
package:com.linkedin.android.lite
package:com.android.theme.icon.roundedrect
package:com.android.internal.systemui.navbar.gestural_narrow_back
package:com.android.theme.icon_pack.rounded.settings
package:cn.wps.moffice_eng
package:com.snapchat.android
package:com.miui.core
package:com.miui.face
package:com.miui.home
package:com.wapi.wapicertmanager
package:com.CultureAlley.japanese.english
package:com.google.android.inputmethod.latin
package:com.android.theme.icon_pack.circular.android
package:com.google.android.apps.restore
 
**ADB UNISTALL**

C:\Users\dell\Downloads\adb\platform-tools>adb unistall com.brainly
adb.exe: unknown command unistall

C:\Users\dell\Downloads\adb\platform-tools>adb uninstall com.brainly
Failure [DELETE_FAILED_INTERNAL_ERROR]

C:\Users\dell\Downloads\adb\platform-tools>adb unistall co.brainly
adb.exe: unknown command unistall

C:\Users\dell\Downloads\adb\platform-tools>adb uninstall co.brainly
Success


***ADB INSTALL**


C:\Users\dell\Downloads\adb\platform-tools>adb install C:\Users\dell\Downloads\zapya.apk
Performing Push Install
adb: error: failed to get feature set: no devices/emulators found

C:\Users\dell\Downloads\adb\platform-tools>adb shell
begoniain:/ $ ls
acct        data              init.environ.rc                    init.miui.post_boot.sh     oem      system_ext
apex        data_mirror       init.exaid.hardware.rc             init.miui.qadaemon.rc      proc     vendor
bin         debug_ramdisk     init.mi_thermald.rc                init.miui.rc               product  verity_key
bugreports  default.prop      init.miui.cust.rc                  init.recovery.hardware.rc  res
cache       dev               init.miui.early_boot.sh            linkerconfig               sdcard
config      etc               init.miui.google_revenue_share.rc  lost+found                 storage
cust        init              init.miui.nativedebug.rc           mnt                        sys
d           init.batteryd.rc  init.miui.perf_init.rc             odm                        system
begoniain:/ $ cd s
/system/bin/sh: cd: /s: No such file or directory
2|begoniain:/ $ cd sdcard
begoniain:/sdcard $ ls
Android                                                  PDFfiles           bluetooth
BroChill                                                 PLAYit             browser
CamScanner                                               Photo\ Collage     bytedance
Cardboard                                                Pictures           com.UCMobile.intl
DCIM                                                     PushSdkDefaultLog  dctp
Dcoder                                                   Ringtones          deviceId.txt
Download                                                 SHAREit            did
FileExplorer                                             ShareChat-Media    documents
Fonts                                                    Snapchat           eclipse-java-helios-SR1-win32
GBWhatsApp(07122020_1929)                                Telegram           inShare
GBWhatsApp(08122020_0906)                                UCDownloads        inshot
IMG-20210415-WA0109.7f2ea769b8371b40b45a788b1e80ae88.sa  UCMusic            mAst
IMG_20210401_152512.d55e3467129c90986131f581006abbda.sa  VMate              mace_run
JavaNIDE                                                 VidMate            media
KineMaster                                               Wynk               mp3cutter
MIUI                                                     Xiaomi             supercache
MiVideoGlobal                                            amap               voip-data
Movies                                                   backups            whatsapp
Music                                                    base
Notifications                                            bfly
begoniain:/sdcard $ cd documents
begoniain:/sdcard/documents $ ls
Document-WPS\ Office.pdf  ScannerGo
begoniain:/sdcard/documents $ cd ..
begoniain:/sdcard $ cd DCIM
begoniain:/sdcard/DCIM $ ls
CamScanner  Downloader_for_Instagram     Restored        Snapchat         captured_media
Camera      M.BANNYSHA.(17UE1A0407).pdf  ScreenRecorder  VidStatusCamera  mAst
Creative    PhotosEditor                 Screenshots     bannysha.pdf
begoniain:/sdcard/DCIM $ exit

C:\Users\dell\Downloads\adb\platform-tools>adb pull /sdcard/DCIM/bannysha.pdf C:\Users\dell
/sdcard/DCIM/bannysha.pdf: 1 file pulled, 0 skipped. 30.7 MB/s (2846250 bytes in 0.089s)

**ADB SHELL PS**

C:\Users\dell\Downloads\adb\platform-tools>adb shell ps
USER            PID   PPID     VSZ    RSS WCHAN            ADDR S NAME
root              1      0 2221500   6360 0                   0 S init
root              2      0       0      0 0                   0 S [kthreadd]
root              4      2       0      0 0                   0 I [kworker/0:0H]
root              6      2       0      0 0                   0 I [mm_percpu_wq]
root              7      2       0      0 0                   0 S [ksoftirqd/0]
root              8      2       0      0 0                   0 I [rcu_preempt]
root              9      2       0      0 0                   0 I [rcu_sched]
root             10      2       0      0 0                   0 I [rcu_bh]
root             11      2       0      0 0                   0 S [migration/0]
root             12      2       0      0 0                   0 S [cpuhp/0]
root             13      2       0      0 0                   0 S [cpuhp/1]
root             14      2       0      0 0                   0 S [migration/1]
root             15      2       0      0 0                   0 S [ksoftirqd/1]
root             17      2       0      0 0                   0 I [kworker/1:0H]
root             18      2       0      0 0                   0 S [cpuhp/2]
root             19      2       0      0 0                   0 S [migration/2]
root             20      2       0      0 0                   0 S [ksoftirqd/2]
root             22      2       0      0 0                   0 I [kworker/2:0H]
root             23      2       0      0 0                   0 S [cpuhp/3]
root             24      2       0      0 0                   0 S [migration/3]
root             25      2       0      0 0                   0 S [ksoftirqd/3]
root             28      2       0      0 0                   0 S [cpuhp/4]
root             29      2       0      0 0                   0 S [migration/4]
root             30      2       0      0 0                   0 S [ksoftirqd/4]
root             32      2       0      0 0                   0 I [kworker/4:0H]
root             33      2       0      0 0                   0 S [cpuhp/5]
root             34      2       0      0 0                   0 S [migration/5]
root             35      2       0      0 0                   0 S [ksoftirqd/5]
root             38      2       0      0 0                   0 S [cpuhp/6]
root             39      2       0      0 0                   0 S [migration/6]
root             40      2       0      0 0                   0 S [ksoftirqd/6]
root             43      2       0      0 0                   0 S [cpuhp/7]
root             44      2       0      0 0                   0 S [migration/7]
root             45      2       0      0 0                   0 S [ksoftirqd/7]
root             48      2       0      0 0                   0 I [netns]
root             51      2       0      0 0                   0 I [SSPM_WQ]
root             52      2       0      0 0                   0 S [amms_task]
root             54      2       0      0 0                   0 I [cmdq_buf_dump]
root             55      2       0      0 0                   0 I [cmdq_timeout_ha]
root             56      2       0      0 0                   0 I [cmdq_timeout_wq]
root             58      2       0      0 0                   0 S [oom_reaper]
root             59      2       0      0 0                   0 I [writeback]
root             60      2       0      0 0                   0 S [kcompactd0]
root             61      2       0      0 0                   0 I [crypto]
root             62      2       0      0 0                   0 I [kblockd]
root             63      2       0      0 0                   0 I [blk_crypto_wq]
root             64      2       0      0 0                   0 S [conn-md-thread]
root             65      2       0      0 0                   0 I [pool_reload_wor]
root             66      2       0      0 0                   0 I [cmdq_flushq]
root             67      2       0      0 0                   0 I [cmdq_flushq]
root             68      2       0      0 0                   0 I [cmdq_flushq]
root             69      2       0      0 0                   0 I [cmdq_flushq]
root             70      2       0      0 0                   0 I [cmdq_flushq]
root             71      2       0      0 0                   0 I [cmdq_flushq]
root             72      2       0      0 0                   0 I [cmdq_flushq]
root             73      2       0      0 0                   0 I [cmdq_flushq]
root             74      2       0      0 0                   0 I [task_exec_wq]
root             75      2       0      0 0                   0 I [cmdq_flushq]
root             76      2       0      0 0                   0 I [task_exec_wq]
root             77      2       0      0 0                   0 I [cmdq_flushq]
root             78      2       0      0 0                   0 I [task_exec_wq]
root             79      2       0      0 0                   0 I [cmdq_flushq]
root             80      2       0      0 0                   0 I [task_exec_wq]
root             81      2       0      0 0                   0 I [cmdq_flushq]
root             82      2       0      0 0                   0 I [cmdq_flushq]
root             83      2       0      0 0                   0 I [cmdq_flushq]
root             84      2       0      0 0                   0 I [cmdq_flushq]
root             85      2       0      0 0                   0 I [cmdq_flushq]
root             86      2       0      0 0                   0 I [cmdq_flushq]
root             87      2       0      0 0                   0 I [cmdq_flushq]
root             88      2       0      0 0                   0 I [cmdq_flushq]
root             89      2       0      0 0                   0 I [cmdq_flushq]
root             90      2       0      0 0                   0 I [cmdq_flushq]
root             91      2       0      0 0                   0 I [cmdq_flushq]
root             92      2       0      0 0                   0 I [cmdq_auto_relea]
root             93      2       0      0 0                   0 I [cmdq_auto_relea]
root             94      2       0      0 0                   0 I [cmdq_auto_relea]
root             95      2       0      0 0                   0 I [cmdq_auto_relea]
root             96      2       0      0 0                   0 I [cmdq_auto_relea]
root             97      2       0      0 0                   0 I [cmdq_auto_relea]
root             98      2       0      0 0                   0 I [cmdq_auto_relea]
root             99      2       0      0 0                   0 I [cmdq_auto_relea]
root            100      2       0      0 0                   0 I [cmdq_auto_relea]
root            101      2       0      0 0                   0 I [cmdq_auto_relea]
root            102      2       0      0 0                   0 I [cmdq_auto_relea]
root            103      2       0      0 0                   0 I [cmdq_auto_relea]
root            104      2       0      0 0                   0 I [cmdq_auto_relea]
root            105      2       0      0 0                   0 I [cmdq_auto_relea]
root            106      2       0      0 0                   0 I [cmdq_auto_relea]
root            107      2       0      0 0                   0 I [cmdq_auto_relea]
root            108      2       0      0 0                   0 I [cmdq_auto_relea]
root            109      2       0      0 0                   0 I [cmdq_auto_relea]
root            110      2       0      0 0                   0 I [cmdq_auto_relea]
root            111      2       0      0 0                   0 I [cmdq_auto_relea]
root            112      2       0      0 0                   0 I [cmdq_auto_relea]
root            113      2       0      0 0                   0 I [cmdq_auto_relea]
root            114      2       0      0 0                   0 I [cmdq_auto_relea]
root            115      2       0      0 0                   0 I [cmdq_auto_relea]
root            116      2       0      0 0                   0 I [cmdq_resource]
root            117      2       0      0 0                   0 I [cmdq_mdp_task]
root            118      2       0      0 0                   0 S [pd_dbg_info]
root            119      2       0      0 0                   0 S [chgdet_thread]
root            120      2       0      0 0                   0 I [tcpc_power_off]
root            121      2       0      0 0                   0 I [charger_in]
root            122      2       0      0 0                   0 S [rtmm_pool]
root            123      2       0      0 0                   0 S [rtmm_reclaim]
root            124      2       0      0 0                   0 I [devfreq_wq]
root            125      2       0      0 0                   0 I [cfg80211]
root            129      2       0      0 0                   0 S [irq/216-mt6358-]
root            130      2       0      0 0                   0 I [lbat_service]
root            131      2       0      0 0                   0 S [ion_system_heap]
root            133      2       0      0 0                   0 S [ion_mm_heap]
root            135      2       0      0 0                   0 S [ion_mm_heap_for]
root            136      2       0      0 0                   0 S [ion_comm_pool]
root            137      2       0      0 0                   0 S [ion_mm_heap_for]
root            138      2       0      0 0                   0 S [ion_comm_pool]
root            139      2       0      0 0                   0 S [ion_mm_heap_for]
root            140      2       0      0 0                   0 S [ion_carveout_he]
root            141      2       0      0 0                   0 D [ion_history]
root            142      2       0      0 0                   0 D [mdrt_thread]
root            163      2       0      0 0                   0 S [kauditd]
root            164      2       0      0 0                   0 S [kswapd0]
root            202      2       0      0 0                   0 S [hwrng]
root            203      2       0      0 0                   0 S [btif_rxd]
root            204      2       0      0 0                   0 I [tmem_regmgr_def]
root            205      2       0      0 0                   0 I [tmem_regmgr_def]
root            206      2       0      0 0                   0 I [tmem_regmgr_def]
root            207      2       0      0 0                   0 I [tmem_regmgr_def]
root            209      2       0      0 0                   0 S [ree_dummy_task]
root            210      2       0      0 0                   0 I [accdet]
root            211      2       0      0 0                   0 I [dismicQueue]
root            212      2       0      0 0                   0 I [accdet_eint]
root            213      2       0      0 0                   0 I [ged_notify_sw_v]
root            214      2       0      0 0                   0 I [ged_kpi]
root            216      2       0      0 0                   0 I [kbase_job_fault]
root            217      2       0      0 0                   0 I [mali_aeewp]
root            218      2       0      0 0                   0 I [WMFE-CMDQ-WQ]
root            219      2       0      0 0                   0 I [RSC-CMDQ-WQ]
root            220      2       0      0 0                   0 I [ipi_master]
root            221      2       0      0 0                   0 D [chre_kthread]
root            222      2       0      0 0                   0 D [scp_power_reset]
root            223      2       0      0 0                   0 I [SCP_WQ]
root            224      2       0      0 0                   0 I [SCP_LOG_WQ]
root            225      2       0      0 0                   0 I [SCP_RESET_WQ]
root            226      2       0      0 0                   0 I [adsp_wq]
root            227      2       0      0 0                   0 S [scp_send_thread]
root            228      2       0      0 0                   0 S [scp_recv_thread]
root            229      2       0      0 0                   0 S [scp_send_thread]
root            230      2       0      0 0                   0 S [scp_recv_thread]
root            231      2       0      0 0                   0 D [ccci_fsm1]
root            232      2       0      0 0                   0 D [ccci_poll1]
root            233      2       0      0 0                   0 I [ccmni0_rx_q_wor]
root            234      2       0      0 0                   0 I [ccmni1_rx_q_wor]
root            235      2       0      0 0                   0 I [ccmni2_rx_q_wor]
root            236      2       0      0 0                   0 I [ccmni3_rx_q_wor]
root            237      2       0      0 0                   0 I [ccmni4_rx_q_wor]
root            238      2       0      0 0                   0 I [ccmni5_rx_q_wor]
root            239      2       0      0 0                   0 I [ccmni6_rx_q_wor]
root            240      2       0      0 0                   0 I [ccmni7_rx_q_wor]
root            241      2       0      0 0                   0 I [ccmni8_rx_q_wor]
root            242      2       0      0 0                   0 I [ccmni9_rx_q_wor]
root            243      2       0      0 0                   0 I [ccmni10_rx_q_wo]
root            244      2       0      0 0                   0 I [ccmni11_rx_q_wo]
root            245      2       0      0 0                   0 I [ccmni12_rx_q_wo]
root            246      2       0      0 0                   0 I [ccmni13_rx_q_wo]
root            247      2       0      0 0                   0 I [ccmni14_rx_q_wo]
root            248      2       0      0 0                   0 I [ccmni15_rx_q_wo]
root            249      2       0      0 0                   0 I [ccmni16_rx_q_wo]
root            250      2       0      0 0                   0 I [ccmni17_rx_q_wo]
root            251      2       0      0 0                   0 I [ccmni18_rx_q_wo]
root            252      2       0      0 0                   0 I [ccmni19_rx_q_wo]
root            253      2       0      0 0                   0 I [ccmni20_rx_q_wo]
root            254      2       0      0 0                   0 I [ccmni21_rx_q_wo]
root            255      2       0      0 0                   0 S [ccci_rpc_k]
root            256      2       0      0 0                   0 S [ccci_udc]
root            257      2       0      0 0                   0 S [ccci_ipc_3]
root            258      2       0      0 0                   0 S [ccci_ipc_6]
root            259      2       0      0 0                   0 S [ccci_ipc_7]
root            260      2       0      0 0                   0 S [ccci_ipc_8]
root            261      2       0      0 0                   0 S [ccci_sys]
root            262      2       0      0 0                   0 S [ccci_ctrl]
root            263      2       0      0 0                   0 I [mtk_vibrator]
root            264      2       0      0 0                   0 S [teei_switch_thr]
root            265      2       0      0 0                   0 S [teei_bdrv_threa]
root            266      2       0      0 0                   0 S [teei_log_thread]
root            267      2       0      0 0                   0 D [hang_detect]
root            268      2       0      0 0                   0 S [hang_detect1]
root            269      2       0      0 0                   0 D [ddp_irq_log_kth]
root            271      2       0      0 0                   0 D [disp_check]
root            272      2       0      0 0                   0 S [primary_display]
root            273      2       0      0 0                   0 S [decouple_update]
root            274      2       0      0 0                   0 D [decouple_trigge]
root            275      2       0      0 0                   0 S [display_check_a]
root            276      2       0      0 0                   0 D [disp_delay_trig]
root            277      2       0      0 0                   0 S [disp_od_trigger]
root            278      2       0      0 0                   0 S [present_fence_w]
root            279      2       0      0 0                   0 S [disp_idlemgr]
root            280      2       0      0 0                   0 S [disp_switch_mod]
root            281      2       0      0 0                   0 S [ccu-enque]
root            282      2       0      0 0                   0 I [cpu_freq_wq]
root            283      2       0      0 0                   0 I [cpu_core_wq]
root            284      2       0      0 0                   0 I [dram_vcore_wq]
root            285      2       0      0 0                   0 S [krtatm]
root            286      2       0      0 0                   0 I [mt_usrtch__work]
root            287      2       0      0 0                   0 I [pobqos_ntf_wq]
root            288      2       0      0 0                   0 I [fpsgo_notifier_]
root            289      2       0      0 0                   0 I [mt_fstb]
root            290      2       0      0 0                   0 I [eara_thrm]
root            291      2       0      0 0                   0 I [lt_wq]
root            292      2       0      0 0                   0 I [dump_recog_data]
root            293      2       0      0 0                   0 I [dump_bargein_re]
root            294      2       0      0 0                   0 I [mem_thrash_dete]
root            295      2       0      0 0                   0 S [scsi_eh_0]
root            296      2       0      0 0                   0 I [scsi_tmf_0]
root            297      2       0      0 0                   0 I [ufs_clk_gating_]
root            298      2       0      0 0                   0 S [spi0]
root            299      2       0      0 0                   0 S [spi1]
root            300      2       0      0 0                   0 S [spi2]
root            301      2       0      0 0                   0 S [spi3]
root            302      2       0      0 0                   0 S [spi4]
root            303      2       0      0 0                   0 S [spi5]
root            304      2       0      0 0                   0 S [spi6]
root            305      2       0      0 0                   0 S [spi7]
root            306      2       0      0 0                   0 I [uether]
root            307      2       0      0 0                   0 I [uether_rx1]
root            308      2       0      0 0                   0 I [SecTimerCbWq]
root            309      2       0      0 0                   0 S [irq/39-5-0034]
root            310      2       0      0 0                   0 S [mivr_thread.mt6]
root            311      2       0      0 0                   0 I [pe_pattern]
root            315      2       0      0 0                   0 I [cmdq_flushq]
root            316      2       0      0 0                   0 I [cmdq_flushq]
root            317      2       0      0 0                   0 I [mtk-vcodec-dec]
root            318      2       0      0 0                   0 I [mtk-vcodec-enc]
root            319      2       0      0 0                   0 D [gauge_coulomb_t]
root            320      2       0      0 0                   0 D [battery_thread]
root            321      2       0      0 0                   0 D [power_misc_thre]
root            322      2       0      0 0                   0 S [irq/35-smb1351_]
root            323      2       0      0 0                   0 D [gauge_timer_thr]
root            324      2       0      0 0                   0 I [dm_bufio_cache]
root            325      2       0      0 0                   0 S [nanohub]
root            326      2       0      0 0                   0 I [usb_extcon_work]
root            328      2       0      0 0                   0 I [tfa98xx]
root            330      2       0      0 0                   0 I [ipv6_addrconf]
root            331      2       0      0 0                   0 S [tcpc_timer_type]
root            332      2       0      0 0                   0 S [pps_request_tas]
root            333      2       0      0 0                   0 S [type_c_port0]
root            334      2       0      0 0                   0 D [ipi_cpu_dvfs_rt]
root            335      2       0      0 0                   0 S [sugov:0]
root            336      2       0      0 0                   0 S [sugov:6]
root            337      2       0      0 0                   0 S [EEM_CTRL_L]
root            338      2       0      0 0                   0 S [EEM_CTRL_B]
root            339      2       0      0 0                   0 S [EEM_CTRL_CCI]
root            340      2       0      0 0                   0 S [EEM_CTRL_GPU]
root            341      2       0      0 0                   0 S [EEM_CTRL_GPU_HI]
root            342      2       0      0 0                   0 S [EEM_CTRL_B_HI]
root            343      2       0      0 0                   0 S [Init_1_Stress]
root            344      2       0      0 0                   0 S [cpuhp-ppm]
root            345      2       0      0 0                   0 D [qos_ipi_recv]
root            346      2       0      0 0                   0 I [sys_timer_wq]
root            347      2       0      0 0                   0 S [ksched_hint]
root            348      2       0      0 0                   0 S [vpu0]
root            349      2       0      0 0                   0 S [vpu1]
root            350      2       0      0 0                   0 I [vpu_wq]
root            351      2       0      0 0                   0 I [accel_polling]
root            352      2       0      0 0                   0 I [gyro_polling]
root            353      2       0      0 0                   0 I [mag_polling]
root            354      2       0      0 0                   0 I [baro_polling]
root            355      2       0      0 0                   0 S [irq/24-NVT-ts-s]
root            356      2       0      0 0                   0 I [nvt_fwu_wq]
root            357      2       0      0 0                   0 I [mtk-tpd]
root            359      2       0      0 0                   0 S [irq/27-fingerpr]
root            360      2       0      0 0                   0 D [charger_thread]
root            361      2       0      0 0                   0 I [mt-wdk]
root            362      2       0      0 0                   0 D [wdtk-0]
root            363      2       0      0 0                   0 D [wdtk-1]
root            364      2       0      0 0                   0 D [wdtk-2]
root            365      2       0      0 0                   0 I [boost_workq]
root            366      2       0      0 0                   0 D [wdtk-3]
root            367      2       0      0 0                   0 D [wdtk-4]
root            368      2       0      0 0                   0 D [wdtk-5]
root            369      2       0      0 0                   0 D [wdtk-6]
root            370      2       0      0 0                   0 D [wdtk-7]
root            374      2       0      0 0                   0 I [kworker/7:1H]
root            375      2       0      0 0                   0 I [kworker/6:1H]
root            376      2       0      0 0                   0 I [kdmflush]
root            377      2       0      0 0                   0 I [bioset]
root            378      2       0      0 0                   0 I [kverityd]
root            379      2       0      0 0                   0 I [bioset]
root            380      2       0      0 0                   0 I [bioset]
root            381      2       0      0 0                   0 I [bioset]
root            382      2       0      0 0                   0 I [ext4-rsv-conver]
root            384      2       0      0 0                   0 I [kworker/3:1H]
root            385      2       0      0 0                   0 I [kworker/1:1H]
root            386      2       0      0 0                   0 I [kworker/0:1H]
root            387      2       0      0 0                   0 I [kdmflush]
root            388      2       0      0 0                   0 I [bioset]
root            389      2       0      0 0                   0 I [kverityd]
root            390      2       0      0 0                   0 I [bioset]
root            391      2       0      0 0                   0 I [bioset]
root            392      2       0      0 0                   0 I [bioset]
root            393      2       0      0 0                   0 I [ext4-rsv-conver]
root            397      2       0      0 0                   0 I [kworker/5:1H]
root            399      2       0      0 0                   0 I [usb_dr_workq]
root            401      1 2135984   2312 0                   0 S init
root            403      1 2145044   3900 0                   0 S ueventd
logd            422      1 2318088  30196 0                   0 S logd
lmkd            423      1 2132036   3788 0                   0 S lmkd
system          424      1 2134928   3864 0                   0 S servicemanager
system          425      1 2140140   5128 0                   0 S hwservicemanager
system          426      1 2134832   2768 0                   0 S vndservicemanager
root            427      2       0      0 0                   0 S [psimon]
root            433      1   10260    712 0                   0 S volte_md_status
root            434      1 2245388   5080 0                   0 S vold
root            440      2       0      0 0                   0 S [jbd2/sdc41-8]
root            441      2       0      0 0                   0 I [ext4-rsv-conver]
root            446      2       0      0 0                   0 S [jbd2/sdc11-8]
root            447      2       0      0 0                   0 I [ext4-rsv-conver]
root            449      2       0      0 0                   0 S [jbd2/sdc12-8]
root            450      2       0      0 0                   0 I [ext4-rsv-conver]
root            452      2       0      0 0                   0 S [jbd2/sdc8-8]
root            453      2       0      0 0                   0 I [ext4-rsv-conver]
root            455      2       0      0 0                   0 S [jbd2/sdc7-8]
root            456      2       0      0 0                   0 I [ext4-rsv-conver]
root            458      2       0      0 0                   0 S [jbd2/sdc10-8]
root            459      2       0      0 0                   0 I [ext4-rsv-conver]
root            462      1 2215972   3328 0                   0 S mqsasd
root            463      2       0      0 0                   0 S [jbd2/sdc45-8]
root            464      2       0      0 0                   0 I [ext4-rsv-conver]
root            465      1 2152736   3120 0                   0 S teei_daemon
root            473      2       0      0 0                   0 I [Secure Call]
root            476      2       0      0 0                   0 I [f_mtp]
root            477      1   12020    424 0                   0 S aee_aed
root            478      1 2134944   3096 0                   0 S aee_aed64
root            479      1   10556    692 0                   0 S aee_aedv
root            480      1 2134564   2464 0                   0 S aee_aedv64
system          484      1 2232944   3848 0                   0 S android.system.suspend@1.0-service
system          485      1 2136784   3504 0                   0 S android.hardware.keymaster@4.0-service.beanpod
system          487      1 2132136   2484 0                   0 S wmt_launcher
root            495      2       0      0 0                   0 S [tcpc_event_type]
root            499      2       0      0 0                   0 S [irq/31-11240000]
root            500      2       0      0 0                   0 S [jbd2/sdc46-8]
root            501      2       0      0 0                   0 I [ext4-rsv-conver]
tombstoned      521      1 2131224   2352 0                   0 S tombstoned
statsd          525      1 2369580   9440 0                   0 S statsd
root            526      1 2485184  10120 0                   0 S netd
root            527      1 5553200  80664 0                   0 S zygote64
root            528      1 1851200  34992 0                   0 S zygote
system          532      1 2133840   3216 0                   0 S android.hidl.allocator@1.0-service
audioserver     533      1   98096   8844 0                   0 S android.hardware.audio.service.mediatek
bluetooth       534      1 2216896   2352 0                   0 S android.hardware.bluetooth@1.0-service-mediatek
media           535      1   14920    740 0                   0 S android.hardware.cas@1.2-service
system          536      1 2197416   2744 0                   0 S android.hardware.configstore@1.1-service
media           537      1 2183260   2228 0                   0 S android.hardware.drm@1.3-service.clearkey
media           538      1   20172   5052 0                   0 S android.hardware.drm@1.3-service.widevine
system          539      1 2134808   2728 0                   0 S android.hardware.dumpstate@1.1-service.xiaomi
system          540      1 2134900   2964 0                   0 S android.hardware.gatekeeper@1.0-service
system          541      1 2183540   2684 0                   0 S android.hardware.gnss@2.1-service-mediatek
system          542      1 2210380   4832 0                   0 S android.hardware.graphics.allocator@4.0-service-mediatek
system          543      1 2503716   9688 0                   0 S android.hardware.graphics.composer@2.1-service
system          547      1 2135232   2628 0                   0 S android.hardware.health@2.1-service
system          548      1 2134844   2772 0                   0 S android.hardware.ir@1.0-service
system          549      1 2134840   2952 0                   0 S android.hardware.memtrack@1.0-service
system          551      1 2162600   2928 0                   0 S android.hardware.thermal@2.0-service.mtk
root            553      1 2180072   3360 0                   0 S android.hardware.usb@1.1-service-mediatek
system          555      1 2135688   2912 0                   0 S android.hardware.vibrator@1.0-service-mediatek
system          557      1   14764    872 0                   0 S vtservice_hidl
system          563      1 2250216   1788 0                   0 S lbs_hidl_service
system          565      1 2136404   3484 0                   0 S android.hardware.lights-service.mediatek
system          568      1 2180380   2776 0                   0 S vendor.mediatek.hardware.dfps@1.0-service
system          569      1 2167536   3876 0                   0 S vendor.mediatek.hardware.gpu@1.0-service
system          570      1 2221008   4060 0                   0 S vendor.mediatek.hardware.mtkpower@1.0-service
root            574      1 2135988   2596 0                   0 S vendor.mediatek.hardware.nvram@1.1-service
system          577      1 2162448   2088 0                   0 S vendor.mediatek.hardware.nwk_opt@1.0-service
system          578      1 2136124   3008 0                   0 S vendor.microtrust.hardware.soter@1.0-service
system          579      1 2134744   2868 0                   0 S vendor.mtk.hardware.vibrator@1.2-service
system          580      1 2145732   2784 0                   0 S vendor.xiaomi.hardware.citsensorservice@1.1-service
system          581      1 2219568   3480 0                   0 S vendor.xiaomi.hardware.displayfeature@1.0-service
system          585      1 2179864   2760 0                   0 S fidoca
system          588      1 2179804   2352 0                   0 S vendor.xiaomi.hardware.micharge@1.0-service
system          593      1 2179700   2264 0                   0 S vendor.xiaomi.hardware.misys@1.0-service
system          594      1 2179780   2540 0                   0 S vendor.xiaomi.hardware.misys@2.0-service
system          596      1 2162864   2692 0                   0 S vendor.xiaomi.hardware.misys@3.0-service
system          604      1 2179876   2788 0                   0 S mlipayd@1.1
root            608      1 2184168   3200 0                   0 S mtd@1.2
system          609      1 2163936   2636 0                   0 S tidad@1.1
system          624      1 2181524   2772 0                   0 S vendor.xiaomi.hardware.touchfeature@1.0-service
system          628      1 2162308   2792 0                   0 S vsimd
system          633      1 2136432   3152 0                   0 S android.hardware.vibrator-service.mediatek
audioserver     640      1 2714212  15060 0                   0 S audioserver
credstore       645      1 2159492   3948 0                   0 S credstore
gpu_service     646      1 2159360   3924 0                   0 S gpuservice
system          649      1 3816624  39640 0                   0 S surfaceflinger
system          653      1    8928    808 0                   0 S fuelgauged
radio           655      1   12776   1332 0                   0 S ccci_fsd
system          660      1   14308    356 0                   0 S ccci_mdinit
radio           664      1   11044    596 0                   0 S ccci_rpcd
root            666      1   12224    912 0                   0 S wfca
root            718      1 2136512   2972 0                   0 S batteryd
root            720      1 2718976    536 0                   0 S mi_thermald
root            773      2       0      0 0                   0 I [kbase_event]
root            784      2       0      0 0                   0 S [mtk_stp_psm]
root            785      2       0      0 0                   0 S [mtk_stp_btm]
root            786      2       0      0 0                   0 S [mtk_wmtd]
root            787      2       0      0 0                   0 S [mtk_wmtd_worker]
root            793      1 2167792   4048 0                   0 S displayfeature
nobody          825      1 2149596   1972 0                   0 S traced_probes
nobody          826      1 2149732   2032 0                   0 S traced
system          829      1 2273952   3252 0                   0 S android.hardware.neuralnetworks@1.3-service-mtk-neuron
gps             836      1   40580   5044 0                   0 S mnld
shell           837      1 2214432   2484 0                   0 S lbs_dbg
system          838      1 2212420   7092 0                   0 S shelld
root            839      1 2160964   2844 0                   0 S fdpp
root            841      1 2131484   2060 0                   0 S qadaemon
cameraserver    847      1   63404   7840 0                   0 S cameraserver
shell           848      1    9484    336 0                   0 S connsyslogger
drm             849      1   26144    344 0                   0 S drmserver
incidentd       851      1 2180276   3140 0                   0 S incidentd
system          852      1 2132500   2844 0                   0 S thermald
system          853      1   66968   2944 0                   0 S vtservice
root            854      1 2419508   5588 0                   0 S installd
keystore        856      1 2146556   5364 0                   0 S keystore
mediaex         857      1 2492600  11372 0                   0 S media.extractor
media           859      1 2454464  12944 0                   0 S media.metrics
media           867      1   93136   9748 0                   0 S mediaserver
root            871      1 2254896   3552 0                   0 S miuibooster
system          874      1 2161144   2792 0                   0 S mobile_log_d
shell           876      1 2150832   3120 0                   0 S netdiag
root            877      2       0      0 0                   0 I [ccci_dpmaif_rx0]
root            880      1 2204248   6560 0                   0 S storaged
root            881      2       0      0 0                   0 S [dpmaif_rx_push]
root            882      2       0      0 0                   0 I [md1_tx0_worker]
wifi            883      1 2161128   4588 0                   0 S wificond
root            884      2       0      0 0                   0 I [md1_tx1_worker]
mediacodec      885      1   76328  12316 0                   0 S media.codec
system          886      1 2199664   3312 0                   0 S android.hardware.sensors@1.0-service-mediatek
cameraserver    887      1 3357064  83108 0                   0 S camerahalserver
root            890      2       0      0 0                   0 I [md1_tx2_worker]
root            891      2       0      0 0                   0 I [md1_tx3_worker]
system          893      1 2134800   1620 0                   0 S getgameserver
system          895      1 2132132   2648 0                   0 S thermal
root            896      2       0      0 0                   0 I [rx0_worker]
root            897      2       0      0 0                   0 I [rx1_worker]
root            900      2       0      0 0                   0 I [rx2_worker]
system          903      1    8604    868 0                   0 S thermalloadalgod
system          904      1 2142816   2896 0                   0 S ipsec_mon
root            905      2       0      0 0                   0 I [rx3_worker]
gps             908      1   72028   2900 0                   0 S mtk_agpsd
root            909      2       0      0 0                   0 I [rx4_worker]
system          913      1 2258844   3572 0                   0 S vendor.mediatek.hardware.pq@2.2-service
root            914      2       0      0 0                   0 I [rx5_worker]
root            919      2       0      0 0                   0 I [rx6_worker]
root            922      2       0      0 0                   0 I [rx7_worker]
root            923      2       0      0 0                   0 I [rx8_worker]
media           924      1   23264   2480 0                   0 S vpud
root            926      2       0      0 0                   0 I [rx9_worker]
root            927      2       0      0 0                   0 I [rx10_worker]
root            928      2       0      0 0                   0 I [rx11_worker]
wifi            935      1 2132132   1872 0                   0 S wlan_assistant
root            936      2       0      0 0                   0 I [rx12_worker]
root            938      2       0      0 0                   0 I [rx13_worker]
root            939      2       0      0 0                   0 I [rx14_worker]
root            941      2       0      0 0                   0 I [rx15_worker]
mediacodec      942      1 2601964  10132 0                   0 S media.swcodec
system          945      1 2138664   4004 0                   0 S gatekeeperd
system          950      1 2203536   2756 0                   0 S mfp-daemon
system          961      1 2197180   2852 0                   0 S netdagent
root           1019      2       0      0 0                   0 I [fm_timer_wq]
root           1020      2       0      0 0                   0 I [fm_eint_wq]
root           1100      1   14656    280 0                   0 S bip
shell          1101      1 2319472    436 0                   0 S emdlogger1
root           1102      1   17864    552 0                   0 S volte_imsm_93
radio          1103      1   38976    964 0                   0 S gsm0710muxd
root           1104      1   25088   1700 0                   0 S volte_stack
root           1105      1   29876   3636 0                   0 S volte_ua
system         1111      1   34320   3560 0                   0 S volte_imcb
root           1117      1 2196304   3344 0                   0 S epdg_wod
root           1119      1 2152320   1184 0                   0 S xcap
radio          1228      1 3346648   9572 0                   0 S mtkfusionrild
system         1299    527 10570380 425700 0                  0 S system_server
u0_a133        1740    527 6077244 118804 0                   0 S com.miui.miwallpaper
system         1791    528 1982176 285608 0                   0 S com.android.systemui
root           1852    526 2275856   6888 0                   0 S iptables-restore
root           1854    526 2275856   6652 0                   0 S ip6tables-restore
network_stack  1864    527 5454508  86552 0                   0 S com.android.networkstack.process
secure_element 1903    527 5183088  63772 0                   0 S com.android.se
finddevice     1921    527 5974160  77312 0                   0 S com.xiaomi.finddevice
radio          1929    527 7981128 150068 0                   0 S com.android.phone
root           2021      2       0      0 0                   0 I [kbase_event]
root           2058      2       0      0 0                   0 I [kbase_event]
root           2350      2       0      0 0                   0 I [kbase_event]
radio          2505    527 5767524 107004 0                   0 S com.mediatek.ims
system         2700      1 2132576   2668 0                   0 S charge_logger
system         2702      1 2170060   3924 0                   0 S mcd
system         2704      1 2133488   3228 0                   0 S batterywarning
root           3046      2       0      0 0                   0 I [kbase_event]
u0_a289        3148    527 5978180 101060 0                   0 S com.android.providers.media.module
system         3190    527 5202028  64536 0                   0 S com.goodix.fingerprint
system         3211    527 5688796  83804 0                   0 S com.miui.daemon
u0_a233        3241    527 5233340  63288 0                   0 S system
system         3279    527 5165320  64136 0                   0 S org.ifaa.aidl.manager
u0_a41         3295    527 5202280  64500 0                   0 S com.xiaomi.mircs
u0_a246        3336    527 5200524  63956 0                   0 S com.xiaomi.xmsfkeeper
system         3360    527 5201640  65900 0                   0 S com.tencent.soter.soterserver
system         3382    527 5305616  67148 0                   0 S com.mediatek.voicecommand
system         3420    527 5307568  65408 0                   0 S com.miui.face
root           3463      2       0      0 0                   0 I [kworker/3:0]
u0_a39         3859    527 5322888  66052 0                   0 S com.magiear.handsfree.assistant
u0_a89         4333    527 5631668  85264 0                   0 S com.xiaomi.xmsf
u0_a294        4390    527 24694060 328456 0                  0 S com.miui.android.fashiongallery
root           4660      2       0      0 0                   0 I [kworker/u16:8]
root           4684      2       0      0 0                   0 I [kbase_event]
u0_a6          5041    527 5488956  79500 0                   0 S com.lbe.security.miui
webview_zygote 5853    527 5478708  61084 0                   0 S webview_zygote
system         5918    527 6001544  94952 0                   0 S com.miui.powerkeeper
root           6131      2       0      0 0                   0 R [kworker/u16:9]
system         6133    527 5417576  75764 0                   0 S com.xiaomi.joyose
u0_a7          6387    527 5498956 145232 0                   0 S android.process.media
shell          6573      1 2282048  10476 0                   0 S adbd
root           6579      2       0      0 0                   0 I [kworker/7:2]
u0_a94         6599    527 5230312 114852 0                   0 S com.android.htmlviewer
u0_a61         6620    527 5205628 115840 0                   0 S com.android.settings.intelligence
root           7252      2       0      0 0                   0 I [kworker/6:1]
root           7756      2       0      0 0                   0 I [kworker/u17:2]
root           8297      1 2135320    720 0                   0 S starter
root           8298   8297 2445488   4396 0                   0 S charon
u0_a9          8697    527 5293548 125040 0                   0 S com.google.process.gservices
root           9234      2       0      0 0                   0 I [kworker/3:2H]
u0_a191        9460    527 5320800  67644 0                   0 S com.miui.mishare.connectivity
root           9940      2       0      0 0                   0 S [main_thread]
root           9941      2       0      0 0                   0 S [hif_thread]
root           9942      2       0      0 0                   0 S [rx_thread]
wifi           9944      1 2138584   6764 0                   0 S hostapd
dns_tether     9951    526 2131536   3356 0                   0 S dnsmasq
root          10408      2       0      0 0                   0 I [kworker/u17:0]
root          10795      2       0      0 0                   0 I [kworker/4:0]
system        11013    527 6599588 260132 0                   0 S com.miui.securitycenter
root          11071      2       0      0 0                   0 I [kbase_event]
root          11230      2       0      0 0                   0 I [kbase_event]
root          11413      2       0      0 0                   0 I [kworker/2:2]
root          11468      2       0      0 0                   0 I [kworker/u16:0]
root          11860      2       0      0 0                   0 I [kworker/6:0]
root          11902      2       0      0 0                   0 I [kworker/0:2]
root          11913      2       0      0 0                   0 I [kworker/u16:1]
bluetooth     12715    527 5751688  77656 0                   0 S com.android.bluetooth
u0_a35        12778    527 7242836 229316 0                   0 S com.android.incallui
root          12892      2       0      0 0                   0 I [kbase_event]
system        13174    527 7832080 271024 0                   0 S com.mi.android.globalminusscreen
u0_a95        13299    527 5307716 142040 0                   0 S com.android.chrome
root          13312      2       0      0 0                   0 I [kbase_event]
system        13442      1 2208372   5432 0                   0 S vendor.mediatek.hardware.mms@1.5-service
u0_a18        13717    527 5391772 152536 0                   0 S android.process.acore
root          13761      2       0      0 0                   0 I [kbase_event]
u0_a51        13871    527 6656136 259224 0                   0 S com.google.android.googlequicksearchbox:search
u0_a19        14067    527 8457748 309256 0                   0 S com.android.camera
u0_a196       14109    527 28866464 688032 0                  0 S com.larksuite.suite
root          14259      2       0      0 0                   0 I [kworker/u16:3]
root          14262      2       0      0 0                   0 I [kbase_event]
u0_a48        14371    527 5187228 113588 0                   0 S com.android.cellbroadcastreceiver
u0_i9263      14552   5853 39037772 244372 0                  0 S com.google.android.webview:sandboxed_process0:org.chromium.content.app.SandboxedProcessService0:0
root          14925      2       0      0 0                   0 I [fs_suspend_syss]
root          15165      2       0      0 0                   0 I [kworker/1:2]
root          15205      2       0      0 0                   0 I [kworker/u16:4]
root          15779      2       0      0 0                   0 I [kworker/5:2]
u999_a9       15873    527 5962244 186176 0                   0 S com.google.android.gms.persistent
root          16007      2       0      0 0                   0 I [kbase_event]
root          16178      2       0      0 0                   0 I [kworker/u16:10]
system        16381    527 5343928 101996 0                   0 S com.xiaomi.location.fused
root          16665      2       0      0 0                   0 I [kworker/4:1]
u0_a136       16674    527 5362152 144932 0                   0 S com.miui.analytics
system        16982    527 5493760 143556 0                   0 S com.miui.notification:remote
system        17017    527 5264744 132744 0                   0 S com.miui.notification
u0_a86        17062    527 6409904 168244 0                   0 S com.xiaomi.mipicks
u0_a81        17346    527 22548052 195404 0                  0 S com.miui.msa.global
u0_a18        17380    527 5165584 105844 0                   0 S com.android.calllogbackup
u0_a34        17433    527 6334272 232876 0                   0 S com.android.mms
u0_a52        17673    527 5185252 120416 0                   0 S com.android.providers.calendar
root          17809      2       0      0 0                   0 I [kworker/2:0]
root          17812      2       0      0 0                   0 I [kworker/7:1]
u0_a204       17836    528 2060432 196824 0                   0 S com.nemo.vidmate:core
root          18007      2       0      0 0                   0 I [kworker/3:2]
root          18012      2       0      0 0                   0 I [kworker/1:1]
root          18019      2       0      0 0                   0 I [kworker/0:0]
root          18030      2       0      0 0                   0 I [kworker/5:0]
root          18031      2       0      0 0                   0 I [kworker/4:2]
root          18051      2       0      0 0                   0 I [kworker/u17:3]
u0_a238       18089    527 7013536 254460 0                   0 S com.android.contacts
root          18139      2       0      0 0                   0 I [kbase_event]
system        18165    527 5279056 129916 0                   0 S com.android.server.telecom:ui
root          18259      2       0      0 0                   0 I [kworker/u16:2]
root          18277      2       0      0 0                   0 I [kworker/4:3]
u0_a236       18286    527 5212192 128040 0                   0 S com.miui.yellowpage
root          18345      2       0      0 0                   0 I [kworker/2:1]
root          18403      2       0      0 0                   0 I [kworker/u16:5]
u0_a338       18615    527 6846844 258096 0                   0 S com.linkedin.android
u0_a5         18625    527 5201284 115028 0                   0 S com.google.android.ext.services
u0_a54        18662    527 5488956 126464 0                   0 S com.facebook.services
system        18757    527 5209876 119648 0                   0 S com.miui.screenrecorder
u0_a104       18768    527 5366848 136780 0                   0 S com.milink.service
root          18810      2       0      0 0                   0 I [kworker/7:2H]
root          18935      2       0      0 0                   0 I [kworker/1:0]
u0_a204       18936    528 2005100 155692 0                   0 S com.nemo.vidmate
u0_a106       18991    527 5227980 122176 0                   0 S com.google.android.webview:webview_service
root          19015      2       0      0 0                   0 D [kworker/u16:6]
u0_i9264      19018   5853 5249836 117232 0                   0 S com.google.android.webview:sandboxed_process0:org.chromium.content.app.SandboxedProcessService0:0
root          19133      2       0      0 0                   0 I [kworker/6:2]
root          19134      2       0      0 0                   0 I [kworker/6:3]
shell         19157   6573 2133460   3488 0                   0 R ps
root          19254      2       0      0 0                   0 I [kbase_event]
u0_i9250      19929   5853 5249836 116596 0                   0 S com.google.android.webview:sandboxed_process0:org.chromium.content.app.SandboxedProcessService0:0
root          20095      2       0      0 0                   0 I [kworker/4:2H]
u0_a110       20649    527 5182892 106776 0                   0 S com.android.smspush
u0_a4         21662    527 10512716 433284 0                  0 S com.instagram.android
root          21762      2       0      0 0                   0 I [kbase_event]
system        22036    527 5200496 113428 0                   0 S com.modemdebug
u999_a136     22671    527 5376860 128992 0                   0 S com.miui.analytics
system        22907    527 5319384 122040 0                   0 S com.xiaomi.misettings
u0_a119       22944    527 5546296 195796 0                   0 S com.google.android.tts
root          23660      2       0      0 0                   0 I [kworker/u17:1]
root          24463      2       0      0 0                   0 I [kworker/5:2H]
wifi          25048      1 2165808   7188 0                   0 S android.hardware.wifi@1.0-service-lazy
u0_a9         25958    527 6401376 224412 0                   0 S com.google.android.gms.persistent
u0_a9         25997    527 6572068 234852 0                   0 S com.google.android.gms
u0_a30        26306    527 9651728 388040 0                   0 S com.miui.home
system        26366    527 6202944 160568 0                   0 S com.miui.securitycenter.remote
u999_a9       26684    527 6237700 148312 0                   0 S com.google.android.gms
u0_a134       26951    527 6938908 275724 0                   0 S com.google.android.inputmethod.latin
root          27222      2       0      0 0                   0 I [kbase_event]
u0_a9         27284    527 5931976 135084 0                   0 S com.google.android.gms.unstable
root          27762      2       0      0 0                   0 I [kbase_event]
system        30814    527 6515380 146096 0                   0 S com.xiaomi.mi_connect_service
mdnsr         30908      1   28348   1100 0                   0 S mdnsd
root          31561      2       0      0 0                   0 I [kworker/6:2H]
u0_a232       31632    527 8723100 361316 0                   0 S com.whatsapp
root          32288      2       0      0 0                   0 I [kbase_event]
root          32625      2       0      0 0                   0 I [kworker/2:2H]
u0_a51        32721    527 6668388 148108 0                   0 S com.google.android.googlequicksearchbox:interactor

C:\Users\dell\Downloads\adb\platform-tools>adb tcpip 5555
restarting in TCP mode port: 5555

C:\Users\dell\Downloads\adb\platform-tools>adb connect 100.75.22.162
connected to 100.75.22.162:5555

C:\Users\dell\Downloads\adb\platform-tools>adb devices
List of devices attached
jfqgguvot8ukbann        device
100.75.22.162:5555      device


C:\Users\dell\Downloads\adb\platform-tools>adb devices
List of devices attached
100.75.22.162:5555      device


C:\Users\dell\Downloads\adb\platform-tools>adb diconnect 100.75.22.162
adb.exe: unknown command diconnect

C:\Users\dell\Downloads\adb\platform-tools>adb disconnect 100.75.22.162
disconnected 100.75.22.162

C:\Users\dell\Downloads\adb\platform-tools>adb devices
List of devices attached
jfqgguvot8ukbann        device
