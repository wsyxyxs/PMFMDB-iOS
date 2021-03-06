//
//  PMDataManager.h
//  PMFMDB
//
//  Created by wsy on 15/12/1.
//  Copyright © 2015年 WSY. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PMDataManager : NSObject

+ (instancetype)dataBaseWithDbpath:(NSString *)dbpath;

@property (nonatomic, copy, readonly) NSString *dbpath;

- (NSArray *)getAllTables;

- (NSArray *)getAllIndexs;

- (NSString *)getDBSize;

- (NSDictionary *)getTableColumnNamesWithTableName:(NSString *)tableName;

- (NSArray *)getTableAllValueWithTableName:(NSString *)tableName;

- (NSArray *)getTableValueWithSql:(NSString *)sql;

- (NSError *)executeWithSql:(NSString *)sql;

- (NSMutableArray *)getWithSql:(NSString *)sql;

- (NSString *)sqlIsValid:(NSString *)sql;

- (void)deleteTableCacheWihtName:(NSString *)name;

- (void)deleteAllTables;


@end
