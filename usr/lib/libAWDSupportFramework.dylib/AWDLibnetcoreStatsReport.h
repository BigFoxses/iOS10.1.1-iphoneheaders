/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:39:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDLibnetcoreMbufStatsReport, AWDLibnetcoreNetworkdStatsReport, NSMutableArray, AWDLibnetcoreTCPECNStatsReport, AWDLibnetcoreTCPStatsReport, AWDLibnetcoreTCPTFOStatsReport;

@interface AWDLibnetcoreStatsReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	AWDLibnetcoreMbufStatsReport* _mbufStatisticsReport;
	AWDLibnetcoreNetworkdStatsReport* _networkdStatisticsReport;
	unsigned _reportReason;
	NSMutableArray* _tcpECNInterfaceReports;
	AWDLibnetcoreTCPECNStatsReport* _tcpECNStatisticsReport;
	AWDLibnetcoreTCPStatsReport* _tcpStatisticsReport;
	AWDLibnetcoreTCPTFOStatsReport* _tcpTFOStatisticsReport;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasReportReason; 
@property (assign,nonatomic) unsigned reportReason;                                                    //@synthesize reportReason=_reportReason - In the implementation block
@property (nonatomic,readonly) BOOL hasMbufStatisticsReport; 
@property (nonatomic,retain) AWDLibnetcoreMbufStatsReport * mbufStatisticsReport;                      //@synthesize mbufStatisticsReport=_mbufStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasTcpStatisticsReport; 
@property (nonatomic,retain) AWDLibnetcoreTCPStatsReport * tcpStatisticsReport;                        //@synthesize tcpStatisticsReport=_tcpStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasTcpECNStatisticsReport; 
@property (nonatomic,retain) AWDLibnetcoreTCPECNStatsReport * tcpECNStatisticsReport;                  //@synthesize tcpECNStatisticsReport=_tcpECNStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasTcpTFOStatisticsReport; 
@property (nonatomic,retain) AWDLibnetcoreTCPTFOStatsReport * tcpTFOStatisticsReport;                  //@synthesize tcpTFOStatisticsReport=_tcpTFOStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkdStatisticsReport; 
@property (nonatomic,retain) AWDLibnetcoreNetworkdStatsReport * networkdStatisticsReport;              //@synthesize networkdStatisticsReport=_networkdStatisticsReport - In the implementation block
@property (nonatomic,retain) NSMutableArray * tcpECNInterfaceReports;                                  //@synthesize tcpECNInterfaceReports=_tcpECNInterfaceReports - In the implementation block
+(Class)tcpECNInterfaceReportType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setMbufStatisticsReport:(AWDLibnetcoreMbufStatsReport *)arg1 ;
-(void)setTcpStatisticsReport:(AWDLibnetcoreTCPStatsReport *)arg1 ;
-(void)setTcpECNStatisticsReport:(AWDLibnetcoreTCPECNStatsReport *)arg1 ;
-(void)setTcpTFOStatisticsReport:(AWDLibnetcoreTCPTFOStatsReport *)arg1 ;
-(void)setNetworkdStatisticsReport:(AWDLibnetcoreNetworkdStatsReport *)arg1 ;
-(void)setTcpECNInterfaceReports:(NSMutableArray *)arg1 ;
-(void)addTcpECNInterfaceReport:(id)arg1 ;
-(unsigned long long)tcpECNInterfaceReportsCount;
-(void)clearTcpECNInterfaceReports;
-(id)tcpECNInterfaceReportAtIndex:(unsigned long long)arg1 ;
-(void)setReportReason:(unsigned)arg1 ;
-(void)setHasReportReason:(BOOL)arg1 ;
-(BOOL)hasReportReason;
-(BOOL)hasMbufStatisticsReport;
-(BOOL)hasTcpStatisticsReport;
-(BOOL)hasTcpECNStatisticsReport;
-(BOOL)hasTcpTFOStatisticsReport;
-(BOOL)hasNetworkdStatisticsReport;
-(unsigned)reportReason;
-(AWDLibnetcoreMbufStatsReport *)mbufStatisticsReport;
-(AWDLibnetcoreTCPStatsReport *)tcpStatisticsReport;
-(AWDLibnetcoreTCPECNStatsReport *)tcpECNStatisticsReport;
-(AWDLibnetcoreTCPTFOStatsReport *)tcpTFOStatisticsReport;
-(AWDLibnetcoreNetworkdStatsReport *)networkdStatisticsReport;
-(NSMutableArray *)tcpECNInterfaceReports;
@end

