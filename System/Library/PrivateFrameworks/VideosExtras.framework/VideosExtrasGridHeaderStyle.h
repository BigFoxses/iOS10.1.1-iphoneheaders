/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideosExtras/VideosExtras-Structs.h>
@class NSString, NSDictionary, UIColor;

@interface VideosExtrasGridHeaderStyle : NSObject {

	BOOL _showsImage;
	NSString* _titleTextStyle;
	double _titleLineHeight;
	NSString* _subtitleTextStyle;
	double _subtitleLineHeight;
	double _bottomLabelDescender;
	NSDictionary* _titleDefaultFontAttributes;
	NSDictionary* _subtitleDefaultFontAttributes;
	UIColor* _titleColor;
	UIColor* _subtitleColor;
	UIEdgeInsets _insets;

}

@property (assign,nonatomic) BOOL showsImage;                                           //@synthesize showsImage=_showsImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                                       //@synthesize insets=_insets - In the implementation block
@property (nonatomic,retain) NSString * titleTextStyle;                                 //@synthesize titleTextStyle=_titleTextStyle - In the implementation block
@property (assign,nonatomic) double titleLineHeight;                                    //@synthesize titleLineHeight=_titleLineHeight - In the implementation block
@property (nonatomic,retain) NSString * subtitleTextStyle;                              //@synthesize subtitleTextStyle=_subtitleTextStyle - In the implementation block
@property (assign,nonatomic) double subtitleLineHeight;                                 //@synthesize subtitleLineHeight=_subtitleLineHeight - In the implementation block
@property (assign,nonatomic) double bottomLabelDescender;                               //@synthesize bottomLabelDescender=_bottomLabelDescender - In the implementation block
@property (nonatomic,retain) NSDictionary * titleDefaultFontAttributes;                 //@synthesize titleDefaultFontAttributes=_titleDefaultFontAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * subtitleDefaultFontAttributes;              //@synthesize subtitleDefaultFontAttributes=_subtitleDefaultFontAttributes - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;                                      //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,retain) UIColor * subtitleColor;                                   //@synthesize subtitleColor=_subtitleColor - In the implementation block
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(void)setSubtitleColor:(UIColor *)arg1 ;
-(UIColor *)subtitleColor;
-(void)setTitleTextStyle:(NSString *)arg1 ;
-(NSString *)titleTextStyle;
-(NSString *)subtitleTextStyle;
-(NSDictionary *)titleDefaultFontAttributes;
-(NSDictionary *)subtitleDefaultFontAttributes;
-(void)setSubtitleTextStyle:(NSString *)arg1 ;
-(void)setTitleDefaultFontAttributes:(NSDictionary *)arg1 ;
-(void)setSubtitleDefaultFontAttributes:(NSDictionary *)arg1 ;
-(BOOL)showsImage;
-(void)setShowsImage:(BOOL)arg1 ;
-(double)titleLineHeight;
-(void)setTitleLineHeight:(double)arg1 ;
-(double)subtitleLineHeight;
-(void)setSubtitleLineHeight:(double)arg1 ;
-(double)bottomLabelDescender;
-(void)setBottomLabelDescender:(double)arg1 ;
@end

