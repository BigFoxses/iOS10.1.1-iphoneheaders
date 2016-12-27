/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface CNUIPropertyListRepresentationAttachmentsBuilder : NSObject {

	NSMutableDictionary* _mutableAttachments;

}

@property (nonatomic,copy,readonly) NSMutableDictionary * mutableAttachments;              //@synthesize mutableAttachments=_mutableAttachments - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * attachments; 
-(id)init;
-(NSDictionary *)attachments;
-(NSMutableDictionary *)mutableAttachments;
-(void)addAttachmentWithToken:(id)arg1 extension:(id)arg2 category:(id)arg3 data:(id)arg4 ;
@end
