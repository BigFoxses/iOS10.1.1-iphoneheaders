/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/TUCallRequest.h>
#import <libobjc.A.dylib/TUVideoRequest.h>

@class NSString;

@interface TUAnswerRequest : NSObject <NSSecureCoding, TUCallRequest, TUVideoRequest> {

	BOOL _wantsHoldMusic;
	NSString* _uniqueProxyIdentifier;
	NSString* _sourceIdentifier;
	long long _behavior;
	CGSize _localLandscapeAspectRatio;
	CGSize _localPortraitAspectRatio;

}

@property (nonatomic,copy) NSString * sourceIdentifier;                     //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL wantsHoldMusic;                           //@synthesize wantsHoldMusic=_wantsHoldMusic - In the implementation block
@property (assign,nonatomic) long long behavior;                            //@synthesize behavior=_behavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * uniqueProxyIdentifier;                //@synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier - In the implementation block
@property (assign,nonatomic) CGSize localLandscapeAspectRatio;              //@synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio - In the implementation block
@property (assign,nonatomic) CGSize localPortraitAspectRatio;               //@synthesize localPortraitAspectRatio=_localPortraitAspectRatio - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(long long)behavior;
-(void)setBehavior:(long long)arg1 ;
-(NSString *)sourceIdentifier;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSString *)uniqueProxyIdentifier;
-(id)initWithUniqueProxyIdentifier:(id)arg1 ;
-(BOOL)wantsHoldMusic;
-(CGSize)localLandscapeAspectRatio;
-(void)setUniqueProxyIdentifier:(NSString *)arg1 ;
-(void)setLocalLandscapeAspectRatio:(CGSize)arg1 ;
-(id)initWithCall:(id)arg1 ;
-(void)setWantsHoldMusic:(BOOL)arg1 ;
-(void)setLocalPortraitAspectRatio:(CGSize)arg1 ;
-(CGSize)localPortraitAspectRatio;
@end

