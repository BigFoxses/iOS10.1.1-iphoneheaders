/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCHDataFormatter <NSObject>
@required
-(id)chartFormattedStringForValue:(id)arg1 locale:(id)arg2;
-(id)chartFormattedInspectorStringForValue:(id)arg1 locale:(id)arg2;
-(BOOL)isCompatibleWithDataFormatter:(id)arg1;
-(id)convertToPersistableStyleObject;
-(id)convertToSupportedClientFormatObjectWithLocale:(id)arg1;
-(long long)numberOfDecimalPlaces;

@end

