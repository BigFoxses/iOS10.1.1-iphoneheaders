/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSSet, RTPredictionItemMO, RTPredictionTableMO;

@interface RTPredictionTableEntryMO : NSManagedObject

@property (nonatomic,retain) NSSet * conditions; 
@property (nonatomic,retain) RTPredictionItemMO * item; 
@property (nonatomic,retain) RTPredictionTableMO * predictionTable; 
+(id)managedObjectWithItem:(id)arg1 conditions:(id)arg2 inManagedObjectContext:(id)arg3 ;
@end
