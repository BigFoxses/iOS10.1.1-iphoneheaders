/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage, NSArray;

@interface CNUIUserActionItemList : NSObject {

	NSString* _type;
	UIImage* _icon;
	NSArray* _items;

}

@property (nonatomic,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) UIImage * icon;               //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
-(NSString *)type;
-(NSArray *)items;
-(UIImage *)icon;
-(id)initWithItems:(id)arg1 type:(id)arg2 icon:(id)arg3 ;
@end
