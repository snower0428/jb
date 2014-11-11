//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface MTCacheEntity : NSObject
{
    BOOL _dirty;
    id _cache;
    NSString *_key;
    NSString *_path;
    int _type;
    NSDate *_date;
    unsigned long long _size;
}

@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) BOOL dirty; // @synthesize dirty=_dirty;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) id cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)initWithCache:(id)arg1 forKey:(id)arg2 atPath:(id)arg3 andType:(int)arg4;

@end

