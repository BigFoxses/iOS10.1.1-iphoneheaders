/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAObjects-Structs.h>
#import <SAObjects/SAUserActivity.h>

@class NSArray, NSString, NSDictionary, NSURL;

@interface SAClientUserActivity : SAUserActivity

@property (nonatomic,copy) NSArray * keywords; 
@property (nonatomic,copy) NSArray * requiredUserInfoKeys; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (nonatomic,copy) NSURL * webpageURL; 
+(id)clientUserActivity;
+(id)clientUserActivityWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)hasLocationData;
-(id)addressDictionary;
-(id)mapItem;
-(CLLocationCoordinate2D)coordinate;
-(id)startNavigationCommand;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(NSArray *)requiredUserInfoKeys;
-(void)setRequiredUserInfoKeys:(NSArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSDictionary *)userInfo;
-(NSString *)title;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setKeywords:(NSArray *)arg1 ;
-(NSArray *)keywords;
@end

