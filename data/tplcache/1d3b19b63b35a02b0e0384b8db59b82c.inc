<li class="tab-1">
                <div class="clearfix title1">
                    <div class="fl">{dede:field name='typename'/}</div>
                    <span>
                         {dede:channel type='son' noself='yes'}
                         <a href="[field:typelink/]" target="_blank">
                              [field:typename/]
                          </a>
                          {/dede:channel}
                        <!--
                        {dede:arclist row='4' flag='s' orderby='pubdate' titlelen="46" }
                            <a href="[field:arcurl /]" target="_blank">
                                 [field:title /]
                             </a>
                        {/dede:arclist}
                        -->
                    </span>
                    <div class="fr">
                        <a href="{dede:field name='typeurl'/}" target="_blank">
                            更多内容
                        </a>
                    </div>
                </div>
                <div class="ul-box1">
                    {dede:arclist pagesize="1" flag="p" titlelen="46" orderby='pubdate'}
                    <div class="clearfix li">
                        <div class="pic fl">
                            <img src="[field:litpic/]" style="border: none" alt="[field:title /]">
                        </div>
                        <div class="ul-box1-article fl">
                            <h3>[field:title /]</h3>
                            <p>[field:description function="cn_substr(@me,120)"/]... <span><a href="[field:arcurl /]"
                                                                                              target="_blank">【查看更多】</a></span>
                            </p>
                        </div>
                    </div>
                    {/dede:arclist}
                    <div class="zhenzhuang clearfix">
                        <ul class="clearfix">
                            {dede:arclist row="6" titlelen="46" orderby='pubdate'}
                            <li>
                                <a href="[field:arcurl /] " target="_blank">
                                    [field:title /]
                                </a>
                            </li>
                            {/dede:arclist}
                        </ul>
                    </div>
                </div>
            </li>