/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFCharacteristicValueSource <NSObject>
@property (nonatomic,readonly) id<HFCharacteristicOperationContextProviding> contextProvider; 
@optional
-(void)executeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id<HFCharacteristicOperationContextProviding>)contextProvider;
-(id)cachedErrorForExecutionOfActionSet:(id)arg1;
-(id)cachedErrorForWriteToCharacteristic:(id)arg1;

@required
-(id)readValuesForCharacteristics:(id)arg1;
-(id)writeValuesForCharacteristics:(id)arg1;
-(id)cachedValueForCharacteristic:(id)arg1;
-(id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;

@end

