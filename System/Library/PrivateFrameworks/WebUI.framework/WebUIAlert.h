/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface WebUIAlert : NSObject {

	int _otherAction;
	long long _indexOfSelectedIdentity;
	int _type;
	int _defaultAction;
	int _tableAction;
	int _hideAction;
	/*^block*/id _actionHandler;
	NSString* _title;
	NSString* _bodyText;
	id _context;
	NSArray* _identities;
	NSArray* _titles;

}

@property (nonatomic,copy) id actionHandler;                             //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,readonly) int type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * bodyText;                 //@synthesize bodyText=_bodyText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * buttonTitles; 
@property (nonatomic,readonly) int defaultAction;                        //@synthesize defaultAction=_defaultAction - In the implementation block
@property (nonatomic,readonly) int tableAction;                          //@synthesize tableAction=_tableAction - In the implementation block
@property (assign,nonatomic) int hideAction;                             //@synthesize hideAction=_hideAction - In the implementation block
@property (nonatomic,retain) id context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * identities;                       //@synthesize identities=_identities - In the implementation block
@property (nonatomic,copy,readonly) NSArray * titles;                    //@synthesize titles=_titles - In the implementation block
@property (nonatomic,readonly) id selectedIdentity; 
-(NSString *)title;
-(int)type;
-(id)context;
-(NSArray *)titles;
-(void)setContext:(id)arg1 ;
-(NSString *)bodyText;
-(int)defaultAction;
-(id)_buttonTitleForAction:(int)arg1 ;
-(NSArray *)buttonTitles;
-(int)actionForButtonTag:(long long)arg1 ;
-(int)hideAction;
-(void)setSelectedTableItemIndex:(long long)arg1 ;
-(int)tableAction;
-(id)initWithType:(int)arg1 title:(id)arg2 bodyText:(id)arg3 defaultAction:(int)arg4 otherAction:(int)arg5 tableAction:(int)arg6 ;
-(id)initWithType:(int)arg1 title:(id)arg2 defaultAction:(int)arg3 otherAction:(int)arg4 tableAction:(int)arg5 ;
-(id)selectedIdentity;
-(id)initWithType:(int)arg1 title:(id)arg2 defaultAction:(int)arg3 otherAction:(int)arg4 ;
-(id)initWithType:(int)arg1 title:(id)arg2 bodyText:(id)arg3 defaultAction:(int)arg4 otherAction:(int)arg5 ;
-(void)setHideAction:(int)arg1 ;
-(void)setIdentities:(NSArray *)arg1 ;
-(NSArray *)identities;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
@end
