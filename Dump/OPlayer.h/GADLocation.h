//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface GADLocation : NSObject <NSCopying>
{
    float _latitude;
    float _longitude;
    float _accuracy;
    NSString *_locationDescription;
    NSDictionary *_dictionaryRepresentation;
    double _timestamp;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;
@property(copy, nonatomic) NSString *locationDescription; // @synthesize locationDescription=_locationDescription;
@property(readonly, nonatomic) float accuracy; // @synthesize accuracy=_accuracy;
@property(readonly, nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) float latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isPreciseLocation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithLocationDescription:(id)arg1;
- (id)initWithLatitude:(float)arg1 longitude:(float)arg2 accuracy:(float)arg3;

@end
