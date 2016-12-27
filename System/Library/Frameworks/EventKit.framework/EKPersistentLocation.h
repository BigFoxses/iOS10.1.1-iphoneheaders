/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSData;

@interface EKPersistentLocation : EKPersistentObject <NSCopying>

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * address; 
@property (nonatomic,copy) NSNumber * latitude; 
@property (nonatomic,copy) NSNumber * longitude; 
@property (nonatomic,copy) NSNumber * referenceFrame; 
@property (nonatomic,copy) NSNumber * radius; 
@property (nonatomic,copy) NSString * addressBookEntityID; 
@property (nonatomic,copy) NSData * mapKitHandle; 
@property (nonatomic,copy) NSString * routing; 
@property (nonatomic,copy) NSString * derivedFrom; 
+(id)defaultPropertiesToLoad;
+(id)relations;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRadius:(NSNumber *)arg1 ;
-(NSNumber *)radius;
-(NSNumber *)referenceFrame;
-(void)setReferenceFrame:(NSNumber *)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
-(id)calendarItemOwner;
-(NSString *)routing;
-(NSString *)derivedFrom;
-(void)setDerivedFrom:(NSString *)arg1 ;
-(void)setCalendarItemOwner:(id)arg1 ;
-(void)setAlarmOwner:(id)arg1 ;
-(id)alarmOwner;
-(void)setRouting:(NSString *)arg1 ;
-(NSString *)addressBookEntityID;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(void)setAddressBookEntityID:(NSString *)arg1 ;
-(NSData *)mapKitHandle;
-(int)entityType;
-(NSString *)address;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
@end
