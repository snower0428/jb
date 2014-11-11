//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRegularExpression, NSString;

@interface TBWVRule : NSObject
{
    int _target;
    int _ruleType;
    int _totalMatchCount;
    NSString *_indexOfPattern;
    NSString *_nameOfParam;
    NSRegularExpression *_pattern;
    int _isNeedDecode;
}

@property int isNeedDecode; // @synthesize isNeedDecode=_isNeedDecode;
@property(retain, nonatomic) NSRegularExpression *pattern; // @synthesize pattern=_pattern;
@property(retain, nonatomic) NSString *nameOfParam; // @synthesize nameOfParam=_nameOfParam;
@property(retain, nonatomic) NSString *indexOfPattern; // @synthesize indexOfPattern=_indexOfPattern;
@property int totalMatchCount; // @synthesize totalMatchCount=_totalMatchCount;
@property int ruleType; // @synthesize ruleType=_ruleType;
@property int target; // @synthesize target=_target;
- (void).cxx_destruct;

@end
