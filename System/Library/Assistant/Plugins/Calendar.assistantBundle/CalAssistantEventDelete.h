/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/Calendar.assistantBundle/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObjectDelete.h>

@class EKEventStore;

@interface CalAssistantEventDelete : SADomainObjectDelete {

	EKEventStore* _eventStore;

}
-(id)_deleteEvent:(id)arg1 ;
-(id)_validateEvent:(id)arg1 ;
-(id)eventStore;
-(void)setEventStore:(id)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end
