/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVItemWithRecurrenceChildren : CoreDAVItem {

	NSMutableSet* _recurrences;

}

@property (nonatomic,retain) NSMutableSet * recurrences;              //@synthesize recurrences=_recurrences - In the implementation block
-(id)copyParseRules;
-(void)addRecurrence:(id)arg1 ;
-(NSMutableSet *)recurrences;
-(void)setRecurrences:(NSMutableSet *)arg1 ;
@end
