/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISDialogOperation.h>

@class ISAuthenticationChallenge, NSURLCredential;

@interface ISAuthenticationChallengeOperation : ISDialogOperation {

	ISAuthenticationChallenge* _challenge;
	NSURLCredential* _credential;

}

@property (retain) NSURLCredential * credential;                       //@synthesize credential=_credential - In the implementation block
@property (retain) ISAuthenticationChallenge * challenge;              //@synthesize challenge=_challenge - In the implementation block
+(id)operationWithChallenge:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(NSURLCredential *)credential;
-(void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2 ;
-(id)_copyCredentialForSignInResponseDictionary:(id)arg1 ;
-(void)setCredential:(NSURLCredential *)arg1 ;
-(ISAuthenticationChallenge *)challenge;
-(void)setChallenge:(ISAuthenticationChallenge *)arg1 ;
@end

