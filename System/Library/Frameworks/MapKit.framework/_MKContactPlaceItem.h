/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_MKPlaceItem.h>

@class MKMapItem, CNContact, NSString, EKCalendarItem;

@interface _MKContactPlaceItem : NSObject <_MKPlaceItem> {

	MKMapItem* _mapItem;
	CNContact* _contact;
	unsigned long long _options;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,readonly) BOOL isIntermediateMapItem; 
@property (nonatomic,readonly) EKCalendarItem * calendarItem; 
@property (nonatomic,readonly) CNContact * contact; 
@property (nonatomic,readonly) BOOL isContactPersisted; 
@property (nonatomic,readonly) unsigned long long options; 
+(id)placeItemWithMapItem:(id)arg1 contact:(id)arg2 options:(unsigned long long)arg3 ;
-(NSString *)name;
-(unsigned long long)options;
-(void)setIsSuggestedFavorite:(BOOL)arg1 ;
-(BOOL)isIntermediateMapItem;
-(BOOL)isContactPersisted;
-(CNContact *)contact;
-(MKMapItem *)mapItem;
-(EKCalendarItem *)calendarItem;
@end
