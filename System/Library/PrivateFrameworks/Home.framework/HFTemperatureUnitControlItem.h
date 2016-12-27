/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFControlItem.h>

@class NSString;

@interface HFTemperatureUnitControlItem : HFControlItem {

	NSString* _temperatureUnitCharacteristicType;

}

@property (nonatomic,copy,readonly) NSString * temperatureUnitCharacteristicType;              //@synthesize temperatureUnitCharacteristicType=_temperatureUnitCharacteristicType - In the implementation block
+(Class)valueClass;
-(id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3 ;
-(id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3 ;
-(id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(NSString *)temperatureUnitCharacteristicType;
-(id)characteristicValuesForValue:(id)arg1 ;
@end
