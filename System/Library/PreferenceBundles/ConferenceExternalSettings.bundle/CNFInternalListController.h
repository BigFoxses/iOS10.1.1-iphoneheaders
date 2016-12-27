/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/ConferenceExternalSettings.bundle/ConferenceExternalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConferenceExternalSettings/ConferenceExternalSettings-Structs.h>
#import <Preferences/PSListController.h>

@class IMServiceImpl, FTRegConnectionHandler;

@interface CNFInternalListController : PSListController {

	SCPreferencesRef _prefs;
	IMServiceImpl* _service;
	FTRegConnectionHandler* _connectionHandler;

}

@property (nonatomic,retain) IMServiceImpl * service;              //@synthesize service=_service - In the implementation block
-(id)registrationSMSAttempts:(id)arg1 ;
-(void)setAutoAnswerInvites:(id)arg1 specifier:(id)arg2 ;
-(void)setEnvironment:(id)arg1 specifier:(id)arg2 ;
-(void)setDNSLogging:(id)arg1 specifier:(id)arg2 ;
-(id)DNSLogging:(id)arg1 ;
-(void)syncAgentLogSettings;
-(void)setConferenceDebugLogging:(id)arg1 specifier:(id)arg2 ;
-(void)setAllowAnyNetworkCalls:(id)arg1 specifier:(id)arg2 ;
-(void)setAllowFaceTimeAudioFromDialer:(id)arg1 specifier:(id)arg2 ;
-(void)setRegistrationLoggingEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)environment:(id)arg1 ;
-(id)registrationLoggingEnabled:(id)arg1 ;
-(void)resetSMSCounter:(id)arg1 ;
-(void)viewAccountsTapped:(id)arg1 ;
-(id)allowFaceTimeAudioFromDialer:(id)arg1 ;
-(id)conferenceDebugLogging:(id)arg1 ;
-(id)autoAnswerInvites:(id)arg1 ;
-(void)setUseBlurStyle:(id)arg1 specifier:(id)arg2 ;
-(id)allowNonWifiCalls:(id)arg1 ;
-(id)useBlurStyle:(id)arg1 ;
-(id)allowAnyNetworkCalls:(id)arg1 ;
-(void)setNotifySMS:(id)arg1 specifier:(id)arg2 ;
-(id)conferencePushToken:(id)arg1 ;
-(void)daemonConnectionChanged:(id)arg1 ;
-(void)clearLogs:(id)arg1 ;
-(void)setAllowNonWifiCalls:(id)arg1 specifier:(id)arg2 ;
-(void)dumpLastVC:(id)arg1 ;
-(void)registrationStatusChanged:(id)arg1 ;
-(void)loginStatusChanged:(id)arg1 ;
-(id)notifySMS:(id)arg1 ;
-(id)conferenceDebugLoggingDefaults;
-(id)init;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setService:(IMServiceImpl *)arg1 ;
-(IMServiceImpl *)service;
-(id)specifiers;
@end
