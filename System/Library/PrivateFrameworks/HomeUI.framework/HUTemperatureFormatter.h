/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <WeatherFoundation/WFTemperatureFormatter.h>
#import <libobjc.A.dylib/WFTemperatureUnitObserver.h>
#import <libobjc.A.dylib/HFTemperatureFormatter.h>

@class NSString;

@interface HUTemperatureFormatter : WFTemperatureFormatter <WFTemperatureUnitObserver, HFTemperatureFormatter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL inputIsCelsius; 
@property (nonatomic,copy) NSString * fallbackTemperatureString; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnitTo:(int)arg2 ;
-(BOOL)inputIsCelsius;
-(void)setInputIsCelsius:(BOOL)arg1 ;
@end
