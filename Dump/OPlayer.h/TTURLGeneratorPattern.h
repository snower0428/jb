//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTURLPattern.h"

@interface TTURLGeneratorPattern : TTURLPattern
{
    Class _targetClass;
}

@property(nonatomic) Class targetClass; // @synthesize targetClass=_targetClass;
- (id)generateURLFromObject:(id)arg1;
- (void)compile;
- (Class)classForInvocation;
- (void)dealloc;
- (id)init;
- (id)initWithTargetClass:(id)arg1;

@end

