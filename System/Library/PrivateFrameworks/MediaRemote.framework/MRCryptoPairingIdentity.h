/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface MRCryptoPairingIdentity : NSObject {

	NSString* _identifier;
	NSData* _publicKey;
	NSData* _privateKey;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSData * publicKey;                 //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,readonly) NSData * privateKey;                //@synthesize privateKey=_privateKey - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 ;
-(NSData *)publicKey;
-(NSData *)privateKey;
@end
