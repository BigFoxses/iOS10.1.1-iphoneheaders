/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor, TabOverviewItemLayoutInfo, TabStackTitleView, TabOverview;

@interface TabOverviewItem : NSObject {

	BOOL _hidden;
	BOOL _closing;
	NSString* _title;
	UIColor* _titleColor;
	NSString* _stackName;
	TabOverviewItemLayoutInfo* _layoutInfo;
	TabStackTitleView* _stackTitleView;
	TabOverview* _tabOverview;

}

@property (assign,nonatomic) BOOL closing;                                        //@synthesize closing=_closing - In the implementation block
@property (nonatomic,retain) TabOverviewItemLayoutInfo * layoutInfo;              //@synthesize layoutInfo=_layoutInfo - In the implementation block
@property (nonatomic,retain) TabStackTitleView * stackTitleView;                  //@synthesize stackTitleView=_stackTitleView - In the implementation block
@property (assign,nonatomic,__weak) TabOverview * tabOverview;                    //@synthesize tabOverview=_tabOverview - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                         //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIColor * titleColor;                                  //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy) NSString * stackName;                                  //@synthesize stackName=_stackName - In the implementation block
-(TabOverview *)tabOverview;
-(void)setTabOverview:(TabOverview *)arg1 ;
-(void)setStackName:(NSString *)arg1 ;
-(NSString *)stackName;
-(BOOL)closing;
-(void)setClosing:(BOOL)arg1 ;
-(TabStackTitleView *)stackTitleView;
-(void)setStackTitleView:(TabStackTitleView *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(TabOverviewItemLayoutInfo *)layoutInfo;
-(void)setLayoutInfo:(TabOverviewItemLayoutInfo *)arg1 ;
-(BOOL)hidden;
@end

