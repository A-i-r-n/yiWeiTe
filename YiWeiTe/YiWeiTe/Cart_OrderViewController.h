//
//  Cart_OrderViewController.h
//  YiWeiTe
//
//  Created by daiqile on 16/6/2.
//  Copyright © 2016年 DaiQiLe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Cart_OrderViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITableView *tableView;
- (IBAction)submitOrder:(id)sender;

@end
