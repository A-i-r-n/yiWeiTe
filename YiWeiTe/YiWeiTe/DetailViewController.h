//
//  DetailViewController.h
//  YiWeiTe
//
//  Created by daiqile on 16/6/15.
//  Copyright © 2016年 DaiQiLe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "QXActionSheet.h"

@interface DetailViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (nonatomic,strong) QXActionSheet *ActionSheet;
@end