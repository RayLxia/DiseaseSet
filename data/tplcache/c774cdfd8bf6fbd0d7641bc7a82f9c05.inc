<div class="list_mumber">
            <h3 class="clearfix">
                <span class="fl">
                    {dede:field name='typename'/}
                </span>
                <ins class="fr">
                    <a href="{dede:field name='typeurl'/}" target="_blank">
                        MORE
                    </a>
                </ins>
            </h3>
            <ul class="clearfix">
                {dede:channel type='son' noself='yes'}
                <li>
                    <a href="[field:typelink/]" target="_blank">
                        [field:typename/]
                    </a>
                </li>
                {/dede:channel}
            </ul>
        </div>