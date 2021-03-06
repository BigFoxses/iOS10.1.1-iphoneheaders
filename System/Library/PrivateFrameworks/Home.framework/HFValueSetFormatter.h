/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Foundation/NSFormatter.h>

@interface HFValueSetFormatter : NSFormatter {

	long long _unitStyle;
	/*^block*/id _stringProvider;

}

@property (nonatomic,copy) id stringProvider;                  //@synthesize stringProvider=_stringProvider - In the implementation block
@property (assign,nonatomic) long long unitStyle;              //@synthesize unitStyle=_unitStyle - In the implementation block
+(id)formatterWithStringProvider:(/*^block*/id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(long long)unitStyle;
-(void)setUnitStyle:(long long)arg1 ;
-(id)initWithStringProvider:(/*^block*/id)arg1 ;
-(void)setStringProvider:(id)arg1 ;
-(id)stringProvider;
@end

