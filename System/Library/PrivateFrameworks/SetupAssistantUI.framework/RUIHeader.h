/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RUIHeader <NSObject>
@optional
-(void)setDelegate:(id)arg1;
-(void)setIconImage:(id)arg1;
-(void)setImageSize:(CGSize)arg1;
-(void)setImageAlignment:(int)arg1;
-(id)headerLabel;
-(void)setText:(id)arg1 attributes:(id)arg2;
-(double)headerHeightForWidth:(double)arg1 inView:(id)arg2;
-(void)setSubHeaderText:(id)arg1 attributes:(id)arg2;
-(void)setDetailText:(id)arg1 attributes:(id)arg2;
-(id)detailHeaderLabel;
-(void)setSectionIsFirst:(BOOL)arg1;
-(double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2;
-(id)subHeaderLabel;

@required
-(id)initWithAttributes:(id)arg1;

@end

