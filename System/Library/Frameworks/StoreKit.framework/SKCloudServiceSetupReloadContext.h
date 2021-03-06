/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/StoreKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSURL, NSString, NSArray;

@interface SKCloudServiceSetupReloadContext : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _userInfo;
	NSURL* _cloudServiceSetupURL;
	NSString* _action;
	NSArray* _queryItems;
	NSString* _sourceApplicationBundleIdentifier;
	NSURL* _referrerURL;
	NSString* _serializedUserInfo;

}

@property (nonatomic,copy,readonly) NSString * serializedUserInfo;                    //@synthesize serializedUserInfo=_serializedUserInfo - In the implementation block
@property (nonatomic,retain) NSURL * cloudServiceSetupURL;                            //@synthesize cloudServiceSetupURL=_cloudServiceSetupURL - In the implementation block
@property (nonatomic,copy) NSString * action;                                         //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSArray * queryItems;                                      //@synthesize queryItems=_queryItems - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;              //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * referrerURL;                                     //@synthesize referrerURL=_referrerURL - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDictionary *)userInfo;
-(NSString *)action;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(NSString *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setQueryItems:(NSArray *)arg1 ;
-(NSArray *)queryItems;
-(NSURL *)cloudServiceSetupURL;
-(void)setCloudServiceSetupURL:(NSURL *)arg1 ;
-(NSString *)serializedUserInfo;
-(NSURL *)referrerURL;
-(void)setReferrerURL:(NSURL *)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
@end

