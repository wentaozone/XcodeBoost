//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/XCBuildPropertyDefinitionStringNodeAdapter.h>

@class NSCell;

@interface XCBuildPropertyDefinitionUserDefinedNodeAdapter : XCBuildPropertyDefinitionStringNodeAdapter
{
    BOOL _noEditUntilRebuild;
    NSCell *_nameCell;
}

- (void)dataNodeConfigure:(id)arg1;
- (void)setNewName:(id)arg1;
- (void)rename:(id)arg1 toNewName:(id)arg2 conditionSet:(id)arg3;
- (id)dataNode:(id)arg1 outlineView:(id)arg2 dataCellForTableColumn:(id)arg3;
- (BOOL)formatter:(id)arg1 getObjectValue:(out id *)arg2 forString:(id)arg3 errorDescription:(out id *)arg4;
- (BOOL)dataNode:(id)arg1 shouldEditTableColumn:(id)arg2;
- (void)assignCurrentValuesFor:(id)arg1;

@end
