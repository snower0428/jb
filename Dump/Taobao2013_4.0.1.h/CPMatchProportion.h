//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CPMatchProportion : NSObject
{
    float _hostWinSp;
    float _hostWinBp;
    BOOL _hostWinSpTrend;
    BOOL _isHostWinSelected;
    float _vistorWinSp;
    float _vistorWinBp;
    BOOL _vistorWinSpTrend;
    BOOL _isVistorWinSelected;
    float _deuceSp;
    float _deuceBp;
    BOOL _deuceSpTrend;
    BOOL _isDeuceSelected;
    NSString *_playType;
    BOOL _hasSelect;
    BOOL _canSelect;
    BOOL _isSelected;
    BOOL _needShow;
    float _concedeCount;
}

@property(nonatomic) BOOL needShow; // @synthesize needShow=_needShow;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) float concedeCount; // @synthesize concedeCount=_concedeCount;
@property(nonatomic) BOOL canSelect; // @synthesize canSelect=_canSelect;
@property(retain, nonatomic) NSString *playType; // @synthesize playType=_playType;
@property(nonatomic) BOOL isDeuceSelected; // @synthesize isDeuceSelected=_isDeuceSelected;
@property(nonatomic) BOOL deuceSpTrend; // @synthesize deuceSpTrend=_deuceSpTrend;
@property(nonatomic) float deuceBp; // @synthesize deuceBp=_deuceBp;
@property(nonatomic) float deuceSp; // @synthesize deuceSp=_deuceSp;
@property(nonatomic) BOOL isVistorWinSelected; // @synthesize isVistorWinSelected=_isVistorWinSelected;
@property(nonatomic) BOOL vistorWinSpTrend; // @synthesize vistorWinSpTrend=_vistorWinSpTrend;
@property(nonatomic) float vistorWinBp; // @synthesize vistorWinBp=_vistorWinBp;
@property(nonatomic) float vistorWinSp; // @synthesize vistorWinSp=_vistorWinSp;
@property(nonatomic) BOOL isHostWinSelected; // @synthesize isHostWinSelected=_isHostWinSelected;
@property(nonatomic) BOOL hostWinSpTrend; // @synthesize hostWinSpTrend=_hostWinSpTrend;
@property(nonatomic) float hostWinBp; // @synthesize hostWinBp=_hostWinBp;
@property(nonatomic) float hostWinSp; // @synthesize hostWinSp=_hostWinSp;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)restoreFromProportion:(id)arg1;
- (void)clearSelSp;
@property(readonly, nonatomic) BOOL hasSelect; // @synthesize hasSelect=_hasSelect;
- (id)getSpStr:(BOOL)arg1;
- (float)getSp:(BOOL)arg1;

@end
