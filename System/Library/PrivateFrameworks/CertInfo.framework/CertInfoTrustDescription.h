/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CertInfoTrustDescription <NSObject>
@required
-(id)summaryTitle;
-(unsigned long long)certificateCount;
-(id)certificatePropertiesAtIndex:(unsigned long long)arg1;
-(id)summarySubtitle;
-(id)summaryDescriptionItems;
-(id)certificateSubjectSummaryAtIndex:(unsigned long long)arg1;
-(id)certificateIssuerSummaryAtIndex:(unsigned long long)arg1;
-(id)certificateExpirationDateAtIndex:(unsigned long long)arg1;
-(BOOL)isRootCertificate;
-(BOOL)isTrusted;

@end

