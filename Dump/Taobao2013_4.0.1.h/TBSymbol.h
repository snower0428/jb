//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBSymbol : NSObject
{
    NSString *_typeName;
    NSString *_data;
    int _count;
    int _type;
    int _subType;
    struct CGRect _bounds;
}

@property(readonly, nonatomic) int subType; // @synthesize subType=_subType;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) int count; // @synthesize count=_count;
@property(readonly, nonatomic) NSString *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
- (void)dealloc;
- (id)initWithName:(id)arg1 data:(id)arg2 count:(int)arg3 bound:(struct CGRect)arg4 type:(int)arg5 subType:(int)arg6;

@end

