//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface HomeBlock : NSObject
{
    BOOL _canEdit;
    NSString *_backgroundImageName;
    NSString *_iconImageName;
    NSString *_titleName;
    int _type;
}

+ (id)initWithDictionary:(id)arg1;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) BOOL canEdit; // @synthesize canEdit=_canEdit;
@property(copy, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
@property(copy, nonatomic) NSString *iconImageName; // @synthesize iconImageName=_iconImageName;
@property(copy, nonatomic) NSString *backgroundImageName; // @synthesize backgroundImageName=_backgroundImageName;
- (void).cxx_destruct;

@end

