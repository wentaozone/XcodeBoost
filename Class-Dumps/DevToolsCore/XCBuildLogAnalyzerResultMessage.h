//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCBuildLogMessage.h>

@class NSString;

@interface XCBuildLogAnalyzerResultMessage : XCBuildLogMessage
{
    NSString *_resultType;
}

- (void)writeToSerializer:(id)arg1;
- (id)initFromDeserializer:(id)arg1;
- (id)resultCategory;
- (id)resultType;
- (void)setResultType:(id)arg1;
- (BOOL)isAnalyzerResultMessage;
- (void)dealloc;
- (BOOL)isAnalyzerResult;

@end
