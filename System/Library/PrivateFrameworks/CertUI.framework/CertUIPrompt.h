/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CertUI/CertUI-Structs.h>
@class NSString;

@interface CertUIPrompt : NSObject {

	SecTrustRef _trust;
	NSString* _host;
	NSString* _service;
	NSString* _connectionDisplayName;
	/*^block*/id _responseBlock;

}

@property (nonatomic,retain) NSString * host;                             //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) NSString * service;                          //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSString * connectionDisplayName;              //@synthesize connectionDisplayName=_connectionDisplayName - In the implementation block
+(id)stringForResponse:(int)arg1 ;
+(id)promptQueue;
-(void)dealloc;
-(id)description;
-(NSString *)host;
-(void)setHost:(NSString *)arg1 ;
-(NSString *)connectionDisplayName;
-(id)_propertyNamed:(id)arg1 ofType:(id)arg2 inProperties:(id)arg3 ;
-(id)_titleFromTrust:(SecTrustRef)arg1 ;
-(id)_issuerFromTrust:(SecTrustRef)arg1 ;
-(id)_subtitleFromTrust:(SecTrustRef)arg1 ;
-(id)_purposeFromTrustProperties:(id)arg1 ;
-(id)_expirationFromTrust:(SecTrustRef)arg1 ;
-(BOOL)_isRootCertificateFromTrust:(SecTrustRef)arg1 ;
-(id)_digestFromTrust:(SecTrustRef)arg1 ;
-(int)_sendRemoteMessageWithPromptOptions:(id)arg1 ;
-(id)_newUserInfoForDisplayName:(id)arg1 hostname:(id)arg2 trust:(SecTrustRef)arg3 options:(id)arg4 ;
-(id)_messagingCenter;
-(int)_responseFromReplyDict:(id)arg1 ;
-(int)_sendRemoteMessage;
-(SecTrustRef)trust;
-(void)_informConsumerOfResponse:(int)arg1 ;
-(void)setTrust:(SecTrustRef)arg1 ;
-(void)showPromptWithOptions:(id)arg1 responseBlock:(/*^block*/id)arg2 ;
-(void)setConnectionDisplayName:(NSString *)arg1 ;
-(int)showAndWaitForResponse;
-(id)_sendablePropertiesFromTrust:(SecTrustRef)arg1 ;
-(id)_sendablePropertiesFromProperties:(id)arg1 ;
-(id)_sendablePropertyFromProperty:(id)arg1 ;
-(id)_copyPropertiesFromTrust:(SecTrustRef)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(NSString *)service;
-(void)showPromptWithResponseBlock:(/*^block*/id)arg1 ;
@end

